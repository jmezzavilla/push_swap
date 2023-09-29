/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jealves- <jealves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 12:35:07 by jealves-          #+#    #+#             */
/*   Updated: 2023/09/27 12:13:25 by jealves-         ###   ########.fr       */
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

void	swap(t_list **stack);
void	rotate(t_list **stack);
void	reverse_rotate(t_list **stack);
void	push(t_list **src_stack, t_list **dst_stack);

void	create_by_str(char **str, t_list **lst);
void	check_sort(t_list *lst);
void	check_args(int ac, char **av);

void	msg(const char *message);
void	error_msg(const char *message);

void	rotate_low_value(t_list **lst);
void	sort(t_list **a, t_list **b);
void	sort_2nbrs(t_list **lst_a);
void	sort_3nbrs(t_list **lst_a);
void	sort_4nbrs(t_list **lst_a, t_list **lst_b);
void	sort_5nbrs(t_list **lst_a, t_list **lst_b);

#endif
