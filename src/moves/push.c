/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jealves- <jealves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 20:58:40 by jealves-          #+#    #+#             */
/*   Updated: 2023/09/30 10:28:33 by jealves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_list **src_lst, t_list **dst_lst)
{
	ft_lstadd_front(dst_lst, ft_lstnew((*src_lst)->content));
	ft_lstdelfirst(src_lst);
}

void	pa(t_list **lst_a, t_list **lst_b)
{
	msg("pa");
	push(lst_a, lst_b);
}

void	pb(t_list **lst_b, t_list **lst_a)
{
	msg("pb");
	push(lst_b, lst_a);
}
