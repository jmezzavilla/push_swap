/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jealves- <jealves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 12:23:15 by jealves-          #+#    #+#             */
/*   Updated: 2023/09/27 12:48:29 by jealves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_list	*list_a;
	t_list	*list_b;
	t_item	*item;

	list_a = NULL;
	list_b = NULL;
	check_args(ac, av);
	create_by_str(av, &list_a);
	check_sort(list_a);
	sort(&list_a, &list_b);
	while (list_a)
	{
		item = list_a->content;
		msg(ft_itoa(item->nbr));
		list_a = list_a->next;
	}
	return (0);
}
