/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnikifor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 16:09:00 by mnikifor          #+#    #+#             */
/*   Updated: 2017/06/19 17:51:05 by mnikifor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strndup(const char *src, int n)
{
	char	*dest;

	if (!(dest = malloc(sizeof(*src) * (n + 1))))
		return (NULL);
	dest = ft_strncpy(dest, src, n);
	dest[n] = '\0';
	return (dest);
}
