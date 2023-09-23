/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swift_element_stack.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jealves- <jealves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 21:07:53 by jealves-          #+#    #+#             */
/*   Updated: 2023/09/23 18:10:31 by jealves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list *swift_element_stack(t_list *stack, char *cmd)
{
    ft_printf("%s\n",cmd);
    ft_lstadd_back(&stack,ft_lstnew(stack->content));
    ft_lstdelfirst(&stack);
    return (stack);
}