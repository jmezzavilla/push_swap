/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jealves- <jealves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 12:35:07 by jealves-          #+#    #+#             */
/*   Updated: 2023/09/24 15:45:53 by jealves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include <fcntl.h>

void	swap(t_list *stack);
t_list	*rotate(t_list *stack);
t_list	*reverse_rotate(t_list *stack);
void	push(t_list *src_stack, t_list *dst_stack);

#endif
