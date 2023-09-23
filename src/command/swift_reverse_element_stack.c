/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swift_reverse_element_stack.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jealves- <jealves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 21:07:53 by jealves-          #+#    #+#             */
/*   Updated: 2023/09/23 17:01:23 by jealves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void swift_reverse_element_stack(t_list *stack, char *cmd)
{
    ft_printf("%s\n",cmd);
    t_list *current;
    current = ft_lstlast(stack);
    ft_lstadd_front(&stack,ft_lstnew(current->content));
    ft_lstdellast(&stack);
    free(current);
}