/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   send_element_between_stack.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jealves- <jealves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 20:58:40 by jealves-          #+#    #+#             */
/*   Updated: 2023/09/20 21:53:57 by jealves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"



void send_element_between_stack(t_list *src_stack, t_list *dst_stack, char *cmd)
{
    ft_printf("%s\n",cmd);
    ft_lstadd_front(&dst_stack,ft_lstnew(src_stack->content));
    ft_lstdelfirst(&src_stack);
}