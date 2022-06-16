/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucho <jucho@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 19:19:18 by jucho             #+#    #+#             */
/*   Updated: 2022/06/16 19:19:29 by jucho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int	num;

	num = 1524;
	ft_printf("%p\n", &num);
	printf("%p\n", &num);
	ft_printf("%d\n", num);
	printf("%d\n", num);
	ft_printf("%u\n", num);
	printf("%u\n", num);
	ft_printf("%x\n", num);
	printf("%x\n", num);
	ft_printf("%X\n", num);
	printf("%X\n", num);
	ft_printf("%k\n", num);
	printf("%k\n", num);
	return (0);
}
