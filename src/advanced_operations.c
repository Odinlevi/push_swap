/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   advanced_operations.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnikifor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/20 18:09:52 by mnikifor          #+#    #+#             */
/*   Updated: 2017/07/31 14:21:01 by mnikifor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack *s1, t_stack *s2)
{
	int tmp;

	if (s1 && s1->next)
	{
		tmp = s1->data;
		s1->data = s1->next->data;
		s1->next->data = tmp;
	}
	if (s2 && s2->next)
	{
		tmp = s2->data;
		s2->data = s2->next->data;
		s2->next->data = tmp;
	}
}

int		push(t_stack **dest, t_stack **src)
{
	if (src && *src)
	{
		if (stack_push(dest, (*src)->data) == false)
		{
			return (false);
		}
		stack_pop(src);
	}
	return (true);
}

int		rotate(t_stack **s1, t_stack **s2)
{
	t_stack *queuenode;

	if (s1 && *s1 && (*s1)->next)
	{
		queuenode = *s1;
		while (queuenode->next)
			queuenode = queuenode->next;
		if ((queuenode->next = ft_memalloc(sizeof(t_stack))) == NULL)
			return (false);
		queuenode->next->data = (*s1)->data;
		queuenode->next->next = NULL;
		stack_pop(s1);
	}
	if (s2 && *s2 && (*s2)->next)
	{
		queuenode = *s2;
		while (queuenode->next)
			queuenode = queuenode->next;
		if ((queuenode->next = ft_memalloc(sizeof(t_stack))) == NULL)
			return (false);
		queuenode->next->data = (*s2)->data;
		queuenode->next->next = NULL;
		stack_pop(s2);
	}
	return (true);
}

int		revrot(t_stack **s1, t_stack **s2)
{
	t_stack *queuenode;

	if (s1 && *s1 && (*s1)->next)
	{
		queuenode = *s1;
		while (queuenode->next->next)
			queuenode = queuenode->next;
		if (stack_push(s1, queuenode->next->data) == false)
			return (false);
		free(queuenode->next);
		queuenode->next = NULL;
	}
	if (s2 && *s2 && (*s2)->next)
	{
		queuenode = *s2;
		while (queuenode->next->next)
			queuenode = queuenode->next;
		if (stack_push(s2, queuenode->next->data) == false)
			return (false);
		free(queuenode->next);
		queuenode->next = NULL;
	}
	return (true);
}
