/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucho <jucho@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 00:34:48 by jucho             #+#    #+#             */
/*   Updated: 2022/01/23 00:34:48 by jucho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	idx;

	idx = 0;
	len = ft_strlen(src);
	if (dstsize == 0)
		return (len);
	while (idx < dstsize - 1)
	{
		if (src[idx] == '\0')
			break ;
		dst[idx] = src[idx];
		idx++;
	}
	if (dstsize > 0)
		dst[idx] = '\0';
	return (len);
}

// ft_strlcpy : src에서 dst로 값을 size길이 만큼 복사.	src 길이 반환
