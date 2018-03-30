/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcount.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnikifor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 12:10:25 by mnikifor          #+#    #+#             */
/*   Updated: 2017/06/19 17:48:35 by mnikifor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_lstcount(t_list *lst)
{
	size_t i;
	t_list *tmp;

	i = 0;
	tmp = lst;
	if (tmp)
	{
		while (tmp)
		{
			tmp = tmp->next;
			i++;
		}
	}
	return (i);
}
