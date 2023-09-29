/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5nbrs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jealves- <jealves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 21:51:17 by jealves-          #+#    #+#             */
/*   Updated: 2023/09/27 12:14:35 by jealves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_5nbrs(t_list **lst_a, t_list **lst_b)
{
	rotate_low_value(lst_a);
	push(lst_a, lst_b);
	sort_4nbrs(lst_a, lst_b);
	push(lst_b, lst_a);
}
