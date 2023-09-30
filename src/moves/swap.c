/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jealves- <jealves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 20:53:50 by jealves-          #+#    #+#             */
/*   Updated: 2023/09/30 10:28:24 by jealves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_list **lst)
{
	t_item	*temp;

	temp = (*lst)->content;
	(*lst)->content = (*lst)->next->content;
	(*lst)->next->content = temp;
}

void	sa(t_list **lst)
{
	msg("sa");
	swap(lst);
}

void	sb(t_list **lst)
{
	msg("sb");
	swap(lst);
}

void	ss(t_list **lst_a, t_list **lst_b)
{
	msg("ss");
	swap(lst_a);
	swap(lst_b);
}
