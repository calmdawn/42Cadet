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
	idx = dst_len;
	if (dstsize == 0)
		return (src_len);
	while ((idx + 1) < dstsize && *src != '\0')
	{
		dst[idx] = *src;
		src++;
		idx++;
	}
	dst[idx] = '\0';
	if (dst_len < dstsize)
		return (dst_len + src_len);
	return (dstsize + src_len);
}
