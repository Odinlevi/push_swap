/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnikifor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 11:30:29 by mnikifor          #+#    #+#             */
/*   Updated: 2017/09/25 11:30:30 by mnikifor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lexic_cmp(t_list *a, t_list *b)
{
	return (ft_strcmp(a->content, b->content));
}

int	ft_rlexic_cmp(t_list *a, t_list *b)
{
	return (-(ft_strcmp(a->content, b->content)));
}
