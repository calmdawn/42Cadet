/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucho <jucho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 13:56:14 by jucho             #+#    #+#             */
/*   Updated: 2022/01/12 13:56:26 by jucho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int	ch)
{
	if ('a' <= ch && ch <= 'z')
		return (1);
	else
		return (0);
}