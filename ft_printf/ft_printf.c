/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucho <jucho@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 02:43:57 by jucho             #+#    #+#             */
/*   Updated: 2022/06/16 18:59:33 by jucho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	get_print(char ch, va_list ap)
{	
	int	len;

	len = 0;
	if (ch == 'c')
		len = len + ft_putchar(va_arg(ap, int));
	else if (ch == 's')
		len = len + ft_putstr(va_arg(ap, char *));
	else if (ch == 'p')
	{
		len = len + ft_putstr("0x");
		len = len + ft_put_pointer(va_arg(ap, unsigned long long));
	}
	else if (ch == 'd' || ch == 'i')
		len = len + ft_putnbr(va_arg(ap, int));
	else if (ch == 'u')
		len = len + ft_put_unsign(va_arg(ap, unsigned int));
	else if (ch == 'x')
		len = len + ft_put_low_hexa(va_arg(ap, unsigned int));
	else if (ch == 'X')
		len = len + ft_put_up_hexa(va_arg(ap, unsigned int));
	else if (ch == '%')
		len = len + ft_putchar(ch);
	else
		len = len + ft_putchar(ch);
	return (len);
}

int	ft_printf(const char *val, ...)
{
	va_list	ap;
	int		idx;
	int		len;

	idx = 0;
	len = 0;
	va_start(ap, val);
	while (val[idx] != '\0')
	{
		if (val[idx] != '%')
			len = len + ft_putchar(val[idx]);
		else
		{
			idx++;
			len = len + get_print(val[idx], ap);
		}
		idx++;
	}
	va_end(ap);
	return (len);
}
