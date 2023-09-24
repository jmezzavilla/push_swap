/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jealves- <jealves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 12:23:15 by jealves-          #+#    #+#             */
/*   Updated: 2023/09/24 18:46:06 by jealves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
    t_list *list_a;
    t_list *list_b;

    list_a = NULL;
    list_b = NULL;

	create_by_str(av[1], &list_a);
	
	check_sort(list_a);

	while(list_a)
	{
		t_item *item = list_a->content;
		list_a = list_a->next;	
	}
    return (0);
	
	
}
