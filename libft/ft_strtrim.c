/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucho <jucho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 04:10:34 by jucho             #+#    #+#             */
/*   Updated: 2022/02/03 16:40:11 by jucho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_end(char const *s1, char const *set)
{
	int	end;

	end = ft_strlen(s1) - 1;
	while (end >= 0)
	{
		if (ft_strchr(set, s1[end]))
			end--;
		else
			return (end);
	}
	return (end);
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
	return (start);
}

static void	make_str(char *str, int start, int end, char const *s1)
{
	int	idx;

	idx = 0;
	while (start <= end)
	{
		str[idx] = s1[start];
		idx++;
		start++;
	}
	str[idx] = '\0';
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		start;
	int		end;

	if (s1 == NULL && set == NULL)
		return (NULL);
	else if (set == NULL)
		return (ft_strdup(s1));
	else if (s1 == NULL)
		return (ft_strdup(""));
	start = get_start(s1, set);
	end = get_end(s1, set);
	if (start > end)
		return (ft_strdup(""));
	str = (char *)malloc(sizeof(char) * (end - start + 2));
	if (str == NULL)
		return (NULL);
	make_str(str, start, end, s1);
	return (str);
}

/* ft_strtrim :
	 s1의 좌측에서 set이 아닌 문자가 나오지 않는 부분부터
	 s1의 우측에서 set이 아닌 문자가 나오지 않는 부분까지 문자열을 자르는 함수
*/
