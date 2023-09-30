/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jealves- <jealves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 21:07:53 by jealves-          #+#    #+#             */
/*   Updated: 2023/09/30 10:26:46 by jealves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_list **stack)
{
	t_list	*current;

	current = ft_lstlast(*stack);
	ft_lstadd_front(stack, ft_lstnew(current->content));
	ft_lstdellast(stack);
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
