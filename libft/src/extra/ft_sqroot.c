/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqroot.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnikifor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/04 16:28:26 by mnikifor          #+#    #+#             */
/*   Updated: 2017/06/19 17:48:49 by mnikifor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqroot(int n)
{
	int size;

	size = 1;
	while (size * size < n)
		size++;
	return (size);
}