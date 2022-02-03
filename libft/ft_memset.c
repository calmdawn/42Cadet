/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucho <jucho@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 00:32:35 by jucho             #+#    #+#             */
/*   Updated: 2022/01/23 00:32:35 by jucho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *ptr, int value, size_t num)
{
	unsigned char	*uch;
	size_t			idx;

	uch = (unsigned char *)ptr;
	idx = 0;
	while (idx < num)
	{
		uch[idx] = value;
		idx++;
	}
	return (ptr);
}

// ft_memset : ptr 메모리 공간에 value 값으로 num 만큼 채움
