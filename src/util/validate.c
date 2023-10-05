/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jealves- <jealves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 17:35:33 by jealves-          #+#    #+#             */
/*   Updated: 2023/10/05 15:06:17 by jealves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_rep_num(int nbr, char **str, int index)
{
	while (str[index])
	{
		if (ft_atoi(str[index]) == nbr)
			return (1);
		index++;
	}
	return (0);
}

void	check_args(int ac, char **av)
{
	int	i;

	i = 1;
	if (ac < 2)
		error_msg();
	while (av[i])
	{
		if (!ft_isnumber(av[i]))
			error_msg();
		if (ft_rep_num(ft_atoi(av[i]), av, i + 1))
			error_msg();
		if (ft_atol(av[i]) < INT_MIN)
			error_msg();
		if (ft_atol(av[i]) > INT_MAX)
			error_msg();
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
