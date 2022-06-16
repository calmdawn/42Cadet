/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_strs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucho <jucho@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 16:34:19 by jucho             #+#    #+#             */
/*   Updated: 2022/06/16 19:16:56 by jucho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *s)
{
	int	len;

	if (s == 0)
	{
		write(1, "(null)", 6);
		return (6);
	}
	len = ft_strlen(s);
	write(1, s, len);
	return (len);
}

int	ft_put_pointer(unsigned long long num)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	if (num == '0')
		ft_putchar('0');
	if (num < 16)
		ft_putchar(hexa[num]);
	else
	{
		ft_put_pointer(num / 16);
		ft_put_pointer(num % 16);
	}
	return (ft_numlen(num));
}

size_t	ft_numlen(unsigned long long num)
{
	int	cnt;

	cnt = 0;
	if (num == 0)
		return (1);
	while (num != 0)
	{
		num = num / 16;
		cnt++;
	}
	return (cnt);
}

size_t	ft_strlen(const char *str)
{
	int	cnt;

	cnt = 0;
	while (str[cnt] != '\0')
		cnt++;
	return (cnt);
}
