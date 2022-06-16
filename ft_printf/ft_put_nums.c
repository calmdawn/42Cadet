/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_nums.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucho <jucho@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 19:15:44 by jucho             #+#    #+#             */
/*   Updated: 2022/06/16 19:18:06 by jucho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_number(int n, int *len)
{
	char	ch;

	if (n < 10)
	{
		ch = n + '0';
		*len = *len + ft_putchar(ch);
	}
	else
	{
		ft_number(n / 10, len);
		ft_number(n % 10, len);
	}
}

int	ft_putnbr(int n)
{
	int	len;

	len = 0;
	if (n == -2147483648)
	{
		len = len + ft_putstr("-2147483648");
		return (len);
	}
	if (n == 0)
		len = len + ft_putchar('0');
	else
	{
		if (n < 0)
		{
			n = -n;
			len = len + ft_putchar('-');
		}
		ft_number(n, &len);
	}
	return (len);
}

int	ft_put_unsign(unsigned int num)
{
	char	ch;
	int		len;

	len = 0;
	if (num < 10)
	{
		ch = num + '0';
		len = len + ft_putchar(ch);
	}
	else
	{
		len = len + ft_put_unsign(num / 10);
		len = len + ft_put_unsign(num % 10);
	}
	return (len);
}

int	ft_put_low_hexa(unsigned int num)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	if (num == '0')
		ft_putchar('0');
	if (num < 16)
		ft_putchar(hexa[num]);
	else
	{
		ft_put_low_hexa(num / 16);
		ft_put_low_hexa(num % 16);
	}
	return (ft_numlen(num));
}

int	ft_put_up_hexa(unsigned int num)
{
	char	*hexa;

	hexa = "0123456789ABCDEF";
	if (num == '0')
		ft_putchar('0');
	if (num < 16)
		ft_putchar(hexa[num]);
	else
	{
		ft_put_up_hexa(num / 16);
		ft_put_up_hexa(num % 16);
	}
	return (ft_numlen(num));
}
