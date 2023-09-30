/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jealves- <jealves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 21:07:53 by jealves-          #+#    #+#             */
/*   Updated: 2023/09/30 10:26:57 by jealves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_list **stack)
{
	ft_lstadd_back(stack, ft_lstnew((*stack)->content));
	ft_lstdelfirst(stack);
}

void	ra(t_list **lst)
{
	msg("ra");
	rotate(lst);
}

void	rb(t_list **lst)
{
	msg("rb");
	rotate(lst);
}

void	rr(t_list **lst_a, t_list **lst_b)
{
	msg("rr");
	rotate(lst_a);
	rotate(lst_b);
}
