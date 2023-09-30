/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jealves- <jealves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 21:07:53 by jealves-          #+#    #+#             */
/*   Updated: 2023/09/29 22:49:13 by jealves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_list **stack)
{
	ft_lstadd_back(stack, ft_lstnew((*stack)->content));
	ft_lstdelfirst(stack);
}

void ra(t_list **lst)
{
	ft_printf("ra\n");
	rotate(lst);
}

void rb(t_list **lst)
{
	ft_printf("rb\n");
	rotate(lst);
}

void rr(t_list **lst_a, t_list **lst_b)
{
	ft_printf("rr\n");
	rotate(lst_a);
	rotate(lst_b);
}