/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnikifor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 11:37:07 by mnikifor          #+#    #+#             */
/*   Updated: 2017/06/09 16:15:10 by mnikifor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dest;

	if (!(dest = malloc(sizeof(*src) * ft_strlen(src) + 1)))
		return (NULL);
	dest = ft_strcpy(dest, src);
	return (dest);
}
