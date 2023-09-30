/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jealves- <jealves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 17:35:33 by jealves-          #+#    #+#             */
/*   Updated: 2023/09/30 15:46:31 by jealves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_rep_num(int nbr, char **str, int index)
{
	while (str[index])
	{
		if (ft_atoi(str[index]) == nbr)
			return (1);
		index++;
	}
	return (0);
}

void	check_args(int ac, char **av)
{
	int	i;

	i = 1;
	if (ac < 2)
		error_msg();
	while (av[i])
	{
		if (!ft_ispositive(av[i]))
			error_msg();
		if (ft_rep_num(ft_atoi(av[i]), av, i + 1))
			error_msg();
		if(INT_MAX < ft_atoi_long(av[i]))
			error_msg();
		i++;
	}
}

