/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucho <jucho@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 04:10:52 by jucho             #+#    #+#             */
/*   Updated: 2022/02/02 03:13:20 by jucho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_len(long long num)
{
	int	cnt;

	cnt = 0;
	if (num < 0)
	{
		cnt++;
		num = num * -1;
	}
	while (num > 0)
	{
		num = num / 10;
		cnt++;
	}
	return (cnt);
}

static void	make_num(char *str, long long num, int len)
{
	if (num < 0)
	{
		str[0] = '-';
		num = num * -1;
	}
	str[len--] = 0;
	while (num > 0)
	{
		str[len] = num % 10 + 48;
		num = num / 10;
		len--;
	}
}

char	*ft_itoa(int n)
{
	char		*str;
	int			len;
	long long	num;

	if (n == 0)
	{
		str = (char *)malloc(sizeof(char) * 2);
		str[0] = '0';
		str[1] = '\0';
	}
	else
	{
		num = n;
		len = get_len(num);
		str = (char *)malloc(sizeof(char) * (len + 1));
		if (str == NULL)
			return (NULL);
		make_num(str, num, len);
	}
	return (str);
}
