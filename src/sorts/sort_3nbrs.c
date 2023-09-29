/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3nbrs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jealves- <jealves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 15:37:04 by jealves-          #+#    #+#             */
/*   Updated: 2023/09/27 12:57:36 by jealves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3nbrs(t_list **lst_a)
{
	t_item *n1;
	t_item *n2;
	t_item *n3;

	n1 = (*lst_a)->content;
	n2 = (*lst_a)->next->content;
	n3 = (*lst_a)->next->next->content;
	
	if(n1->nbr > n2->nbr && n2->nbr > n3->nbr)
	{
		rotate(lst_a);
		swap(lst_a);
	}
	else if(n1->nbr < n2->nbr && n1->nbr > n3->nbr)
		reverse_rotate(lst_a);
	else if(n1->nbr > n2->nbr && n3->nbr > n2->nbr)
		rotate(lst_a);
	else if(n1->nbr < n2->nbr && n2->nbr > n3->nbr)
	{
		swap(lst_a);
		rotate(lst_a);
	}
	else if(n1->nbr > n2->nbr && n1->nbr < n3->nbr)
		swap(lst_a);
}
