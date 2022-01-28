/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucho <jucho@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 06:23:15 by jucho             #+#    #+#             */
/*   Updated: 2022/01/29 07:53:09 by jucho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*pre_list;

	if (lst == NULL || del == NULL)
		return ;
	while (*lst != NULL)
	{
		pre_list = (*lst);
		*lst = (*lst)->next;
		ft_lstdelone(pre_list, del);
	}
	*lst = NULL;
}
