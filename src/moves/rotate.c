/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jealves- <jealves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 21:07:53 by jealves-          #+#    #+#             */
/*   Updated: 2023/09/30 19:43:08 by jealves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_list **lst)
{
	ft_lstadd_back(lst, ft_lstnew((*lst)->content));
	ft_lstdelfirst(lst);
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
