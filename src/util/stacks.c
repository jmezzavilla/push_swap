/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jealves- <jealves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 17:42:36 by jealves-          #+#    #+#             */
/*   Updated: 2023/09/24 18:32:06 by jealves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_item	*create_item(int nbr)
{
	t_item	*item;

	item = ft_calloc(sizeof(item), 1);
	item->nbr = nbr;
	return (item);
}

void	create_by_str(char *str, t_list **lst)
{
	char	**splitted;
	int		i;

	i = 0;
	splitted = ft_split(str, ' ');
	while (splitted[i])
	{
		if (!lst)
		{
			*lst = ft_lstnew(create_item(ft_atoi(splitted[i])));
		}
		else
			ft_lstadd_back(lst, ft_lstnew(create_item(ft_atoi(splitted[i]))));
		i++;
	}
}

void check_sort(t_list *lst)
{
	t_list *temp_lst;
	t_item *current;
	t_item *next;
	
	temp_lst = lst;

	while(temp_lst && temp_lst->next)
	{
		current = temp_lst->content;
		next = temp_lst->next->content;
		if(current->nbr > next->nbr)
			return;
		temp_lst = temp_lst->next;
	}
	exit(EXIT_SUCCESS);
}