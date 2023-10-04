/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   msg.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jealves- <jealves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 22:18:02 by jealves-          #+#    #+#             */
/*   Updated: 2023/10/04 23:55:58 by jealves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_msg()
{
	ft_putstr_fd("Error\n",2);
	exit(EXIT_FAILURE);
}

void	msg(const char *message)
{
	ft_printf("%s\n", message);
}
