/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucho <jucho@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 02:46:22 by jucho             #+#    #+#             */
/*   Updated: 2022/06/16 19:18:45 by jucho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *val, ...);
int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_put_pointer(unsigned long long num);
size_t	ft_numlen(unsigned long long num);
size_t	ft_strlen(const char *str);
void	ft_number(int n, int *len);
int		ft_putnbr(int n);
int		ft_put_unsign(unsigned int num);
int		ft_put_low_hexa(unsigned int num);
int		ft_put_up_hexa(unsigned int num);

#endif
