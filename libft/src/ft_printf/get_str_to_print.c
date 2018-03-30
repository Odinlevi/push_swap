/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_str_to_print.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnikifor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/09 14:09:29 by mnikifor          #+#    #+#             */
/*   Updated: 2017/08/18 17:25:14 by mnikifor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*get_str_to_print(char *hex, char specifier)
{
	if (specifier == 'x' || specifier == 'p')
		return (ft_strdup(ft_strtolower(hex)));
	else
		return (ft_strdup(hex));
}
