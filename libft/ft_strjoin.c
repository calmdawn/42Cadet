/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucho <jucho@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 04:10:15 by jucho             #+#    #+#             */
/*   Updated: 2022/01/23 23:40:14 by jucho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		len1;
	int		len2;
	int		idx;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	idx = 0;
	str = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (str == NULL)
		return (NULL);
	while (idx < len1)
	{
		str[idx] = s1[idx];
		idx++;
	}
	idx = 0;
	while (idx < len2)
	{
		str[len1 + idx] = s2[idx];
		idx++;
	}
	str[len1 + len2] = '\0';
	return (str);
}
