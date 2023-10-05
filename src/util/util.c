/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jealves- <jealves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 21:54:38 by jealves-          #+#    #+#             */
/*   Updated: 2023/10/05 23:55:27 by jealves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_item	*lowest_cost(t_list *lst)
{
	t_item	*item_lowest;
	t_item	*item;

	item_lowest = lst->content;
	while (lst)
	{
		item = lst->content;
		if ((item->cost + item->cost_bf) < (item_lowest->cost
				+ item_lowest->cost_bf))
			item_lowest = item;
		lst = lst->next;
	}
	return (item_lowest);
}

int	get_index_item(t_list *lst, int nbr)
{
	int		i;
	t_item	*item;

	i = 0;
	while (lst)
	{
		item = lst->content;
		if (item->nbr == nbr)
			break ;
		i++;
		lst = lst->next;
	}
	return (i);
}

int	find_lowest_value(t_list *lst)
{
	t_item	*item;
	t_item	*result;
	long	i;
	long	low_index;

	result = lst->content;
	i = 0;
	low_index = 0;
	while (lst)
	{
		item = lst->content;
		if (result->nbr > item->nbr)
		{
			low_index = i;
			result = item;
		}
		lst = lst->next;
		i++;
	}
	return (low_index);
}

int	find_cost(t_list **lst, int nbr)
{
	int	index;

	index = get_index_item(*lst, nbr);
	if (index > ft_lstsize(*lst) / 2)
		return ((ft_lstsize(*lst) - index));
	else
		return (index);
}

long	average(t_list *lst)
{
	t_item	*item;
	t_list	*current;
	long	sum;

	sum = 0;
	current = lst;
	while (current)
	{
		item = current->content;
		sum += item->nbr;
		current = current->next;
	}
	return ((long)sum / ft_lstsize(lst));
}
