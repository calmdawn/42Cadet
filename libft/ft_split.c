/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucho <jucho@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 04:10:43 by jucho             #+#    #+#             */
/*   Updated: 2022/02/02 03:58:38 by jucho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_row_len(const char *s, char c)
{
	int	cnt;
	int	idx;

	cnt = 0;
	idx = 0;
	while (s[idx] != '\0')
	{
		if (s[idx] == c)
			idx++;
		else
		{
			cnt++;
			while (s[idx] != '\0' && s[idx] != c)
				idx++;
		}
	}
	return (cnt);
}

char	*set_split_word(const char *str, char c, int *s_idx, int *e_idx)
{
	char	*word;
	int		idx;

	idx = 0;
	while (str[*e_idx] != '\0')
	{
		if ((str[*e_idx] != c) && (*s_idx == -1))
			*s_idx = *e_idx;
		if ((str[*e_idx] != c) && (str[*e_idx + 1] == c))
		{	
			(*e_idx)++;
			break ;
		}
		(*e_idx)++;
	}
	word = (char *)malloc(sizeof(char) * (*e_idx - *s_idx + 1));
	if (word == NULL)
		return (0);
	while (*s_idx < *e_idx)
		word[idx++] = str[(*s_idx)++];
	word[idx] = '\0';
	return (word);
}

int	set_col(char **str_list, const char *s, char c, int row_len)
{
	int	row;
	int	s_idx;
	int	e_idx;

	row = 0;
	s_idx = -1;
	e_idx = 0;
	while (row < row_len)
	{
		str_list[row] = set_split_word(s, c, &s_idx, &e_idx);
		if (str_list[row] == NULL)
			return (0);
		s_idx = -1;
		row++;
	}
	return (1);
}

char	**error_free(char **str_list)
{
	int	idx;

	idx = 0;
	while (str_list[idx] != NULL)
	{
		free(str_list[idx]);
		idx++;
	}
	free(str_list);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**str_list;
	int		row_len;
	int		result;

	if (s == NULL)
		return (NULL);
	row_len = get_row_len(s, c);
	str_list = (char **)malloc(sizeof(char *) * (row_len + 1));
	if (str_list == NULL)
		return (0);
	str_list[row_len] = 0;
	result = set_col(str_list, s, c, row_len);
	if (result == 0)
		return (error_free(str_list));
	else
		return (str_list);
}
