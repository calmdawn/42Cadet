/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucho <jucho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:51:20 by jucho             #+#    #+#             */
/*   Updated: 2022/06/09 20:18:40 by jucho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static void	all_free(char **strings)
{
	free(*strings);
	*strings = NULL;
}

static char	*get_string(char **strings)
{
	char	*line;
	char	*pre_backup;
	int		idx1;

	idx1 = 0;
	if (strings == NULL)
	{
		all_free(strings);
		return (NULL);
	}
	while ((*strings)[idx1] && (*strings)[idx1] != '\n')
		idx1++;
	line = ft_substr(*strings, 0, idx1 + 1);
	pre_backup = ft_substr(*strings, idx1 + 1, ft_strlen(*strings) - idx1 + 1);
	free(*strings);
	*strings = pre_backup;
	return (line);
}

static char	*read_input(int fd, char *strings, char *line)
{
	int		byte_read;
	char	*temp;

	byte_read = 1;
	while (ft_strchr(strings, '\n') == NULL && byte_read != 0)
	{
		byte_read = read(fd, line, BUFFER_SIZE);
		if (byte_read == -1)
		{
			free(line);
			return (NULL);
		}
		line[byte_read] = '\0';
		if (strings == NULL)
			temp = ft_strdup(line);
		else
			temp = ft_strjoin(strings, line);
		free(strings);
		strings = temp;
	}
	free(line);
	return (strings);
}

char	*get_next_line(int fd)
{
	static char		*strings;
	char			*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	line = (char *)malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (line == NULL)
		return (NULL);
	strings = read_input(fd, strings, line);
	if (strings == NULL)
		return (NULL);
	return (get_string(&strings));
}
