/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnikifor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 23:18:33 by mnikifor          #+#    #+#             */
/*   Updated: 2016/11/16 20:28:43 by mnikifor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	char *buffdest;
	char *buffsrc;

	buffdest = dest;
	buffsrc = (char *)src;
	while (*buffdest != '\0')
		buffdest++;
	while (*buffsrc != '\0')
	{
		*buffdest = *buffsrc;
		buffdest++;
		buffsrc++;
	}
	*buffdest = '\0';
	return (dest);
}
