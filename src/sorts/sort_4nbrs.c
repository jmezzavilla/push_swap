/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_4nbrs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jealves- <jealves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 21:51:17 by jealves-          #+#    #+#             */
/*   Updated: 2023/09/29 22:55:27 by jealves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

void	sort_4nbrs(t_list **lst_a, t_list **lst_b)
{
	rotate_low_value(lst_a);
	pa(lst_a, lst_b);
	sort_3nbrs(lst_a);
	pb(lst_b, lst_a);
}
