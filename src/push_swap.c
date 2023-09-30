/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jealves- <jealves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 12:23:15 by jealves-          #+#    #+#             */
/*   Updated: 2023/09/30 15:30:22 by jealves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_list(t_list *lst)
{
	while (lst)
	{
		msg(ft_itoa(((t_item *)lst->content)->nbr));
		lst = lst->next;
	}
}

int	main(int ac, char **av)
{
	t_list	*list_a;
	t_list	*list_b;

	list_a = NULL;
	list_b = NULL;
	check_args(ac, av);
	create_by_str(av, &list_a);
	check_sort(list_a);
	sort(&list_a, &list_b);
	ft_lstclear(&list_a, clean_lst);
	return (EXIT_SUCCESS);
}
