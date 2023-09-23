/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jealves- <jealves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 20:53:50 by jealves-          #+#    #+#             */
/*   Updated: 2023/09/23 17:31:27 by jealves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void swap_stack(t_list *stack, char *cmd)
{
    ft_printf("%s\n",cmd);
    ft_swap_mem(&stack->content, &stack->next->content, 1);
}