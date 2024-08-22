/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdaher <hdaher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 08:10:43 by hdaher            #+#    #+#             */
/*   Updated: 2024/05/16 09:07:34 by hdaher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*node;

	head = NULL;
	while (lst)
	{
		node = malloc(1 * sizeof(t_list));
		if (node == NULL)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		node->content = f(lst->content);
		node->next = NULL;
		if (head == NULL)
			head = node;
		else
			ft_lstadd_back(&head, node);
		lst = lst->next;
	}
	return (head);
}
