/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucho <jucho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 04:10:34 by jucho             #+#    #+#             */
/*   Updated: 2022/01/29 16:49:38 by jucho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_end(char const *s1, char const *set)
{
	int	end;
	int	i;

	end = ft_strlen(s1);
	while (end >= 0)
	{
		i = 0;
		if (ft_strchr(set, s1[end]))
			end--;
		else
			return (end);
	}
	return (-1);
}

static int	get_start(char const *s1, char const *set)
{
	int	start;

	start = 0;
	while (s1[start] != '\0')
	{
		if (ft_strchr(set, s1[start]))
			start++;
		else
			return (start);
	}
	return (-1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		start;
	int		end;
	int		idx;

	start = get_start(s1, set);
	end = get_end(s1, set);
	idx = 0;
	if (start == -1 || end == -1)
		str = (char *)malloc(sizeof(char) * 1);
	else
		str = (char *)malloc(sizeof(char) * (end - start + 2));
	if (str == NULL)
		return (NULL);
	while (start <= end)
	{
		str[idx++] = s1[start];
		start++;
	}
	str[idx] = '\0';
	return (str);
}
