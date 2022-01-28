/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucho <jucho@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 04:12:04 by jucho             #+#    #+#             */
/*   Updated: 2022/01/29 06:51:55 by jucho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_number(int n, int fd)
{
	char	ch;

	if (n < 10)
	{
		ch = n + '0';
		write(fd, &ch, 1);
	}
	else
	{
		ft_number(n / 10, fd);
		ft_number(n % 10, fd);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	else
	{
		if (n < 0)
		{
			n = -n;
			write(fd, "-", 1);
		}
		ft_number(n, fd);
	}
}
