/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnikifor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 23:11:12 by mnikifor          #+#    #+#             */
/*   Updated: 2016/11/16 20:29:28 by mnikifor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int letter)
{
	while (*str)
	{
		if (*str == letter)
			return ((char *)str);
		str++;
	}
	if (*str == letter)
		return ((char *)str);
	return (NULL);
}
