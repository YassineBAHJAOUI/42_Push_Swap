/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybahjaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 15:07:08 by ybahjaou          #+#    #+#             */
/*   Updated: 2023/03/11 15:07:10 by ybahjaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	int		j;
	char	*str;
	char	*str1;
	int		i;

	i = -1;
	if (!s1)
		str1 = ft_strdup("");
	else
		str1 = ft_strdup(s1);
	str = lb(sizeof (char) * ((ft_strlen(str1)) + ft_strlen(s2)) + 2, 1);
	if (!str)
		return (NULL);
	while (str1[++i])
		str[i] = str1[i];
	str[i] = ' ';
	i++;
	j = i;
	i = -1;
	while (s2[++i])
		str[j++] = s2[i];
	str[j] = '\0';
	return (str);
}
