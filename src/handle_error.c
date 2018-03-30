/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_error.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnikifor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/19 13:47:01 by mnikifor          #+#    #+#             */
/*   Updated: 2017/05/24 16:32:11 by mnikifor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	handle_error(t_stack *a, t_stack *b, t_list *i, t_options *o)
{
	freedom(a, b, i, o);
	ft_putstr_fd("Error\n", 2);
	exit(EXIT_FAILURE);
}
