/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jealves- <jealves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 23:41:28 by jealves-          #+#    #+#             */
/*   Updated: 2023/09/27 12:17:43 by jealves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort(t_list **lst_a, t_list **lst_b)
{
	if (ft_lstsize(*lst_a) == 2)
		sort_2nbrs(lst_a);
	else if (ft_lstsize(*lst_a) == 3)
		sort_3nbrs(lst_a);
	else if(ft_lstsize(*lst_a) == 4)
		sort_4nbrs(lst_a, lst_b);
	else if(ft_lstsize(*lst_a) == 5)
		sort_5nbrs(lst_a, lst_b);
}
