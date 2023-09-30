/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   msg.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jealves- <jealves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 22:18:02 by jealves-          #+#    #+#             */
/*   Updated: 2023/09/30 15:32:55 by jealves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_msg()
{
	ft_printf("Error\n");
	exit(EXIT_FAILURE);
}

void	msg(const char *message)
{
	ft_printf("%s\n", message);
}
