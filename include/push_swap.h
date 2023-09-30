/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jealves- <jealves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 12:35:07 by jealves-          #+#    #+#             */
/*   Updated: 2023/09/30 15:33:18 by jealves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include <limits.h>

typedef struct s_item
{
	int	bf;
	int	bff;
	int	cost;
	int	cost_bf;
	int	nbr;
}		t_item;

/// moves///
void	pa(t_list **lst_a, t_list **lst_b);
void	pb(t_list **lst_b, t_list **lst_a);
void	rra(t_list **lst);
void	rrb(t_list **lst);
void	rrr(t_list **lst_a, t_list **lst_b);
void	ra(t_list **lst);
void	rb(t_list **lst);
void	rr(t_list **lst_a, t_list **lst_b);
void	sa(t_list **lst);
void	sb(t_list **lst);
void	ss(t_list **lst_a, t_list **lst_b);

/// utils///
void	create_by_str(char **str, t_list **lst);
void	check_sort(t_list *lst);
void	check_args(int ac, char **av);
float	average(t_list *lst);
int		find_cost(t_list **lst, int nbr);
int		find_lowest_value(t_list *lst);
t_item	*lowest_cost(t_list *lst);
int		get_index_item(t_list *lst, int nbr);
void	clean_lst(void *content);

/// msg///
void	msg(const char *message);
void	error_msg();

/// sorts///
void	rotate_low_value(t_list **lst);
void	rotate_to_top(t_list **lst, int nbr, int typ_lst);
void	sort(t_list **a, t_list **b);
void	sort_nbrs(t_list **lst_a, t_list **lst_b);
void	sort_2nbrs(t_list **lst_a);
void	sort_3nbrs(t_list **lst_a);
void	sort_4nbrs(t_list **lst_a, t_list **lst_b);
void	sort_5nbrs(t_list **lst_a, t_list **lst_b);

#endif
