/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jealves- <jealves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 23:41:28 by jealves-          #+#    #+#             */
/*   Updated: 2023/09/30 10:10:46 by jealves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_2nbrs(t_list **lst_a)
{
	sa(lst_a);
}

void	sort_3nbrs(t_list **lst_a)
{
	t_item	*n1;
	t_item	*n2;
	t_item	*n3;

	n1 = (*lst_a)->content;
	n2 = (*lst_a)->next->content;
	n3 = (*lst_a)->next->next->content;
	if (n1->nbr > n2->nbr && n2->nbr > n3->nbr)
	{
		ra(lst_a);
		sa(lst_a);
	}
	else if (n1->nbr < n2->nbr && n1->nbr > n3->nbr)
		rra(lst_a);
	else if (n1->nbr > n2->nbr && n3->nbr > n2->nbr)
		ra(lst_a);
	else if (n1->nbr < n2->nbr && n2->nbr > n3->nbr)
	{
		sa(lst_a);
		ra(lst_a);
	}
	else if (n1->nbr > n2->nbr && n1->nbr < n3->nbr)
		sa(lst_a);
}

void	sort_4nbrs(t_list **lst_a, t_list **lst_b)
{
	rotate_low_value(lst_a);
	pa(lst_a, lst_b);
	sort_3nbrs(lst_a);
	pb(lst_b, lst_a);
}

void	sort_5nbrs(t_list **lst_a, t_list **lst_b)
{
	rotate_low_value(lst_a);
	pa(lst_a, lst_b);
	sort_4nbrs(lst_a, lst_b);
	pb(lst_b, lst_a);
}

void	sort(t_list **lst_a, t_list **lst_b)
{
	if (ft_lstsize(*lst_a) == 2)
		sort_2nbrs(lst_a);
	else if (ft_lstsize(*lst_a) == 3)
		sort_3nbrs(lst_a);
	else if (ft_lstsize(*lst_a) == 4)
		sort_4nbrs(lst_a, lst_b);
	else if (ft_lstsize(*lst_a) == 5)
		sort_5nbrs(lst_a, lst_b);
	else
		sort_nbrs(lst_a, lst_b);
}
