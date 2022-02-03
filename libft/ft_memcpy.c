/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucho <jucho@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 00:30:52 by jucho             #+#    #+#             */
/*   Updated: 2022/01/23 00:30:52 by jucho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*dcpy;
	unsigned const char	*scpy;
	size_t				idx;

	dcpy = dst;
	scpy = src;
	idx = 0;
	if (dst == 0 && src == 0)
		return (dst);
	if ((dst == src) || n == 0)
		return (dst);
	while (idx < n)
	{
		dcpy[idx] = scpy[idx];
		idx++;
	}
	return (dst);
}

// ft_memcpy dst 에 src를 n 만큼 복사한 후 반환
