/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybahjaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 15:05:25 by ybahjaou          #+#    #+#             */
/*   Updated: 2023/03/11 15:05:26 by ybahjaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstnew(int num, void *address)
{
	t_list	*node;

	node = lb(sizeof (t_list), 1);
	if (!node)
		return (NULL);
	node -> address = address;
	node -> num = num;
	node -> next = NULL;
	return (node);
}
