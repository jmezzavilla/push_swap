/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_nbrs.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jealves- <jealves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 19:05:53 by jealves-          #+#    #+#             */
/*   Updated: 2023/09/30 11:30:24 by jealves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	get_bf_nbr(t_item *item_b, t_list **lst_a)
{
	t_item	*item_a;
	t_list	*current_a;
	int		bf;
	int		temp;

	current_a = *lst_a;
	bf = INT_MAX;
	while (current_a)
	{
		item_a = current_a->content;
		temp = item_a->nbr - item_b->nbr;
		if (temp < bf && item_a->nbr > item_b->nbr)
		{
			item_b->bff = item_a->nbr - item_b->nbr;
			item_b->bf = item_a->nbr;
			bf = temp;
		}
		current_a = current_a->next;
	}
}

void	get_bf(t_list **lst_a, t_list **lst_b)
{
	t_item	*item_b;
	t_list	*current_b;

	current_b = *lst_b;
	while (current_b)
	{
		item_b = current_b->content;
		get_bf_nbr(item_b, lst_a);
		item_b->cost = find_cost(lst_b, item_b->nbr);
		item_b->cost_bf = find_cost(lst_a, item_b->bf);
		current_b = current_b->next;
	}
}

void	do_sort(t_list **lst_a, t_list **lst_b)
{
	t_item	*item;

	while (*lst_b)
	{
		get_bf(lst_a, lst_b);
		item = lowest_cost(*lst_b);
		if (item->cost > 0)
			rotate_to_top(lst_b, item->nbr, 2);
		if (item->cost_bf > 0)
			rotate_to_top(lst_a, item->bf, 1);
		pa(lst_b, lst_a);
	}
	rotate_low_value(lst_a);
}

void	sort_nbrs(t_list **lst_a, t_list **lst_b)
{
	t_item	*item;

	while (ft_lstsize(*lst_a) > 5)
	{
		item = (*lst_a)->content;
		if (item->nbr < average(*lst_a))
			pb(lst_a, lst_b);
		else
			ra(lst_a);
	}
	sort_5nbrs(lst_a, lst_b);
	do_sort(lst_a, lst_b);
}
