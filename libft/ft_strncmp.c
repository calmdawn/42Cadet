/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucho <jucho@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 15:51:58 by jucho             #+#    #+#             */
/*   Updated: 2022/02/02 00:53:12 by jucho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	idx;

	idx = 0;
	if (n == 0)
		return (0);
	while (s1[idx] != '\0' && s2[idx] != '\0')
	{
		if (idx >= n - 1)
			break ;
		if (s1[idx] != s2[idx])
			break ;
		idx++;
	}
	return ((unsigned char)s1[idx] - (unsigned char)s2[idx]);
}
