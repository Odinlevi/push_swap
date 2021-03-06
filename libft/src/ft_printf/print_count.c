/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_count.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnikifor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/09 15:23:14 by mnikifor          #+#    #+#             */
/*   Updated: 2017/08/18 17:24:59 by mnikifor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	hex_print_count(size_t nb_len, size_t pad_len, t_pf_flags *flags)
{
	if (flags->got_width == true || flags->got_precision == true)
	{
		if (pad_len == flags->precision && pad_len > nb_len)
			return (pad_len + ft_strlen(flags->sign));
		else if (pad_len == flags->width && pad_len > nb_len)
		{
			return (pad_len);
		}
	}
	return (nb_len + ft_strlen(flags->sign));
}

int	print_count(size_t nb_len, size_t pad_len, t_pf_flags *flags, uintmax_t nb)
{
	char *prefix;

	prefix = flags->sign;
	if (flags->got_width == true || flags->got_precision == true)
	{
		if (flags->width > 0 || flags->precision > 0)
		{
			if (pad_len == flags->precision && pad_len > nb_len)
				return (pad_len + ft_strlen(flags->sign));
			else if (pad_len == flags->width && pad_len > nb_len)
			{
				if (prefix && *prefix == '0' && pad_len - 1 == nb_len)
					pad_len++;
				return (pad_len);
			}
		}
		else
		{
			if (flags->sign)
				return (nb ? nb_len + ft_strlen(prefix) : ft_strlen(prefix));
			return (nb ? nb_len : 0);
		}
	}
	return (nb_len + ft_strlen(flags->sign));
}
