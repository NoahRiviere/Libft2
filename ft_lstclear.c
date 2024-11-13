/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norivier <norivier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:44:25 by norivier          #+#    #+#             */
/*   Updated: 2024/11/13 17:44:25 by norivier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next;
	t_list	*head;

	if (!lst || !del || !*lst)
		return ;
	head = *lst;
	while (head)
	{
		head->next = next;
		del(head->content);
		free(head);
		head = next;
	}
	*lst = 0;
}
