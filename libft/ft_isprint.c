/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucho <jucho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 14:38:55 by jucho             #+#    #+#             */
/*   Updated: 2022/01/12 14:44:58 by jucho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int	ch)
{
	if (32 <= ch && ch <=126)
		return (1);
	else
		return (0);
}