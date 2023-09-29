/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jealves- <jealves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 21:54:38 by jealves-          #+#    #+#             */
/*   Updated: 2023/09/27 12:55:22 by jealves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int find_lowest_value(t_list *lst)
{
	t_item *item;
	t_item *result;
	long i;
	long low_index;
	
	result = lst->content;
	i= 0;
	low_index = 0;
	
	while(lst)
	{
		item = lst->content;
		if(result->nbr > item->nbr)
		{
			low_index = i;
			result = item;
		}
		lst = lst->next;
		i++;
	}
	
	return(low_index);
}

void rotate_low_value(t_list **lst)
{
	int low;
	
	low = find_lowest_value(*lst);
	
	if(low >= (ft_lstsize(*lst) / 2))
	{
		while (low < ft_lstsize(*lst))
		{
			reverse_rotate(lst);
			low++;
		}
		
	}
	else if(low < (ft_lstsize(*lst) / 2))
	{
		while(low)
		{
			rotate(lst);
			low--;
		}
	}
}
