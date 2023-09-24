/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jealves- <jealves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 20:58:40 by jealves-          #+#    #+#             */
/*   Updated: 2023/09/24 15:42:56 by jealves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void push(t_list *src_stack, t_list *dst_stack)
{
    ft_lstadd_front(&dst_stack,ft_lstnew(src_stack->content));
    ft_lstdelfirst(&src_stack);
}
