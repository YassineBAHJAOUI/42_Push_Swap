/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cro.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybahjaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 15:00:00 by ybahjaou          #+#    #+#             */
/*   Updated: 2023/03/11 15:00:03 by ybahjaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	ft_cro(t_list *stack)
{
	if (stack)
	{
		while (stack->next)
		{
			if (stack->num < stack->next->num)
				stack = stack->next;
			else
				return (false);
		}
	}
	return (true);
}
