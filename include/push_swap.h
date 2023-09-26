/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jealves- <jealves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 12:35:07 by jealves-          #+#    #+#             */
/*   Updated: 2023/09/26 15:27:29 by jealves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"

typedef struct s_item
{
	int	bf;
	int	cost;
	int	nbr;
}		t_item;

void	swap(t_list *stack);
t_list	*rotate(t_list *stack);
t_list	*reverse_rotate(t_list *stack);
void	push(t_list *src_stack, t_list *dst_stack);

void	create_by_str(char **str, t_list **lst);
void	check_sort(t_list *lst);
void	check_args(int ac, char **av);

void	msg(const char *message);
void	error_msg(const char *message);

void	sort(t_list **a, t_list **b);
void	sort_2nbrs(t_list **lst);

#endif
