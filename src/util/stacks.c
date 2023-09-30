/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jealves- <jealves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 17:42:36 by jealves-          #+#    #+#             */
/*   Updated: 2023/09/30 16:33:57 by jealves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_item	*create_item(int nbr)
{
	t_item	*item;

	item = ft_calloc(sizeof(t_item), 1);
	item->nbr = nbr;
	return (item);
}

void	create_stack(char **str, t_list **lst)
{
	int	i;

	i = 1;
	while (str[i])
	{
		if (!*lst)
			*lst = ft_lstnew(create_item(ft_atoi(str[i])));
		else
			ft_lstadd_back(lst, ft_lstnew(create_item(ft_atoi(str[i]))));
		i++;
	}
}

void	check_sort(t_list *lst)
{
	t_list	*temp_lst;
	t_item	*current;
	t_item	*next;

	temp_lst = lst;
	while (temp_lst && temp_lst->next)
	{
		current = temp_lst->content;
		next = temp_lst->next->content;
		if (current->nbr > next->nbr)
			return ;
		temp_lst = temp_lst->next;
	}
	ft_lstclear(&lst, clean_lst);
	exit(EXIT_SUCCESS);
}

void	rotate_low_value(t_list **lst)
{
	int	low;

	low = find_lowest_value(*lst);
	if (low > (ft_lstsize(*lst) / 2))
	{
		while (low < ft_lstsize(*lst))
		{
			rra(lst);
			low++;
		}
	}
	else
	{
		while (low)
		{
			ra(lst);
			low--;
		}
	}
}

void	rotate_to_top(t_list **lst, int nbr, int typ_lst)
{
	int	index;

	index = get_index_item(*lst, nbr);
	if (index > (ft_lstsize(*lst) / 2))
	{
		while (index < ft_lstsize(*lst))
		{
			if (typ_lst == 1)
				rra(lst);
			else if (typ_lst == 2)
				rrb(lst);
			index++;
		}
	}
	else
	{
		while (index)
		{
			if (typ_lst == 1)
				ra(lst);
			else if (typ_lst == 2)
				rb(lst);
			index--;
		}
	}
}
