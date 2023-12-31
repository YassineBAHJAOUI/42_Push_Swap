/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybahjaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 15:00:58 by ybahjaou          #+#    #+#             */
/*   Updated: 2023/03/11 15:01:00 by ybahjaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_list **src, t_list **dst)
{
	t_list	*tmp;

	if (!*src)
		return ;
	tmp = *src;
	*src = (*src)->next;
	tmp->next = NULL;
	ft_lstadd_front(dst, tmp);
}

void	pa(t_list **src, t_list **dst, int flag)
{
	push(src, dst);
	if (flag)
		ft_putendl_fd("pa", 1);
}

void	pb(t_list **src, t_list **dst, int flag)
{
	push(src, dst);
	if (flag)
		ft_putendl_fd("pb", 1);
}
