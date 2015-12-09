/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhenri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 13:58:39 by fhenri            #+#    #+#             */
/*   Updated: 2015/12/09 15:46:46 by fhenri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char			*ft_strjoin(char const *s1, char const *s2)
{
	char	*tab;
	int		a;
	int		b;

	b = 0;
	a = ft_strlen(s1) + ft_strlen(s2);
	tab = (char*)malloc(sizeof(char) * a);
	if (tab == NULL || s1 == NULL || s2 == NULL)
		return (NULL);
	a = 0;
	while (s1[a])
	{
		tab[b] = s1[a];
		a++;
		b++;
	}
	a = 0;
	while (s2[a])
	{
		tab[b] = s2[a];
		a++;
		b++;
	}
	tab[b] = '\0';
	return (char*)(tab);
}
