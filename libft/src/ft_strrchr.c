/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnikifor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 22:44:35 by mnikifor          #+#    #+#             */
/*   Updated: 2016/11/16 20:38:44 by mnikifor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int letter)
{
	char *ret;

	ret = 0;
	while (*str)
	{
		if (*str == letter)
			ret = (char *)str;
		str++;
	}
	if (*str == letter)
		ret = (char *)str;
	return (ret);
}
