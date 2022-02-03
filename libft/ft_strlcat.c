/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucho <jucho@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 00:34:34 by jucho             #+#    #+#             */
/*   Updated: 2022/01/23 00:34:34 by jucho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	idx;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	idx = 0;
	if (dstsize == 0)
		return (src_len);
	if (dstsize <= dst_len)
		return (src_len + dstsize);
	while ((dst_len + idx + 1) < dstsize && src[idx] != '\0')
	{
		dst[dst_len + idx] = src[idx];
		idx++;
	}
	dst[dst_len + idx] = '\0';
	return (src_len + dst_len);
}
