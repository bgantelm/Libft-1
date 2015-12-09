/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhenri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 12:54:50 by fhenri            #+#    #+#             */
/*   Updated: 2015/12/03 11:51:52 by fhenri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *mot)
{
	int		a;
	char	*copie;

	a = 0;
	while (mot[a])
		a++;
	copie = (char*)malloc(sizeof(char) * a);
	if (copie == NULL)
		return (NULL);
	a = 0;
	while (mot[a])
	{
		copie[a] = mot[a];
		a++;
	}
	copie[a] = '\0';
	return (copie);
}
