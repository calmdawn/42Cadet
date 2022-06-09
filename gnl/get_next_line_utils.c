/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucho <jucho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 01:17:33 by jucho             #+#    #+#             */
/*   Updated: 2022/06/09 20:18:58 by jucho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	int	cnt;

	cnt = 0;
	while (str[cnt] != '\0')
		cnt++;
	return (cnt);
}

//* 문자 c가 존재하면 해당 문자가 존재하는 곳의 포인터를 반환, 존재하지 않으면 NULL을 반환하는 함수.
char	*ft_strchr(const char *str, int c)
{
	if (str == NULL)
		return (0);
	while (*str != '\0')
	{
		if (*str == (char)c)
			return ((char *)str);
		str++;
	}
	if (c == 0)
		return ((char *)str);
	return (0);
}

//포인터s가 가리키는 문자열을 복사하고, 복사된 문자열에 대한 포인터를 반환
char	*ft_strdup(const char *s1)
{
	char	*str;
	int		idx;
	int		len;

	idx = 0;
	len = ft_strlen(s1);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	while (s1[idx] != '\0')
	{
		str[idx] = s1[idx];
		idx++;
	}
	str[idx] = '\0';
	return (str);
}

//원본 문자열 s에서 start에서부터 len만큼의 길이의 하위 문자열을 하나 만들어서 반환
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	size;

	size = 0;
	if (s == NULL || ft_strlen(s) <= start)
		return (NULL);
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	while (size < len)
	{
		str[size] = s[start];
		start++;
		size++;
	}
	str[size] = 0;
	return (str);
}

//s1 문자열과 s2 문자열을 이어붙인 문자열을 복사하여 반환하는 함수
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		len1;
	int		len2;
	int		idx;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	idx = -1;
	str = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (str == NULL)
		return (NULL);
	while (++idx < len1)
		str[idx] = s1[idx];
	idx = -1;
	while (++idx < len2)
		str[len1 + idx] = s2[idx];
	str[len1 + len2] = '\0';
	return (str);
}
