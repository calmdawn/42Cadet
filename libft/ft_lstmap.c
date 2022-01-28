/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucho <jucho@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 06:23:35 by jucho             #+#    #+#             */
/*   Updated: 2022/01/29 07:52:58 by jucho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*total_list;
	t_list	*new_list;

	if (lst == NULL || f == NULL)
		return (NULL);
	total_list = NULL;
	while (lst != NULL)
	{
		new_list = ft_lstnew(f(lst->content));
		if (new_list == NULL)
		{
			ft_lstclear(&total_list, del);
			return (NULL);
		}
		ft_lstadd_back(&total_list, new_list);
		lst = lst->next;
	}
	return (total_list);
}
