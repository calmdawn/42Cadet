/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucho <jucho@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 14:31:56 by jucho             #+#    #+#             */
/*   Updated: 2022/01/12 14:35:59 by jucho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *ch)
{
	int	i;

	i = 0;
	while (ch[i] != '\0')
		i++;
	return (i);
}

char	*ft_strrchr(const char *str, int ch)
{
	int	len;

	len = ft_strlen(str);
	while (len > 0)
	{
		if (str[len] == ch)
			return (str[len]);
		len--;
	}
	return (0);
}
