/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jealves- <jealves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 21:07:53 by jealves-          #+#    #+#             */
/*   Updated: 2023/09/30 19:43:08 by jealves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_list **lst)
{
	t_list	*current;

	current = ft_lstlast(*lst);
	ft_lstadd_front(lst, ft_lstnew(current->content));
	ft_lstdellast(lst);
}

void	rra(t_list **lst)
{
	msg("rra");
	reverse_rotate(lst);
}

void	rrb(t_list **lst)
{
	msg("rrb");
	reverse_rotate(lst);
}

void	rrr(t_list **lst_a, t_list **lst_b)
{
	msg("rrr");
	reverse_rotate(lst_a);
	reverse_rotate(lst_b);
}
