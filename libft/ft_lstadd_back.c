/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucho <jucho@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 06:22:56 by jucho             #+#    #+#             */
/*   Updated: 2022/01/29 06:51:33 by jucho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*end_list;

	if (*lst == NULL)
		*lst = new;
	else
	{
		end_list = ft_lstlast(*lst);
		end_list->next = new;
	}
}
