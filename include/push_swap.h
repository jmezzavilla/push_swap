/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jealves- <jealves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 12:35:07 by jealves-          #+#    #+#             */
/*   Updated: 2023/09/24 00:32:24 by jealves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include <fcntl.h>

void swap_stack(t_list *stack, char *cmd);
t_list *swift_element_stack(t_list *stack, char *cmd);
t_list *swift_reverse_element_stack(t_list *stack, char *cmd);
t_list	*ft_lstidx(t_list *lst, int idx);

#endif
