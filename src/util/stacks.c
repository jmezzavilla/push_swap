/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lsts.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jealves- <jealves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 17:42:36 by jealves-          #+#    #+#             */
/*   Updated: 2023/09/30 19:18:10 by jealves-         ###   ########.fr       */
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

void	build_lst_itens(char **str, t_list **lst)
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

void	build_lst(int ac, char **str, t_list **lst)
{
	check_args(ac, str);
	build_lst_itens(str, lst);
	check_sort(*lst);
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
