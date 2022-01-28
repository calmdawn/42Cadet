/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucho <jucho@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 00:29:36 by jucho             #+#    #+#             */
/*   Updated: 2022/01/23 00:29:36 by jucho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned const char	*ptr;
	size_t				idx;

	ptr = s;
	idx = 0;
	while (idx < n)
	{
		if (ptr[idx] == (unsigned char)c)
			return ((void *)(&ptr[idx]));
		idx++;
	}
	return (0);
}
