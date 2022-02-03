/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucho <jucho@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 00:30:22 by jucho             #+#    #+#             */
/*   Updated: 2022/01/23 00:30:22 by jucho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char	*cpy1;
	unsigned const char	*cpy2;
	size_t				idx;

	cpy1 = s1;
	cpy2 = s2;
	idx = 0;
	while (idx < n)
	{
		if (cpy1[idx] != cpy2[idx])
			return (cpy1[idx] - cpy2[idx]);
		idx++;
	}
	return (0);
}

// ft_memcmp 함수는 두 메모리 블록을 n까지 비교하여 전부 같다면 0, 아니면 다른 값을 반환
