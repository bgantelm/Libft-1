/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhenri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 12:54:50 by fhenri            #+#    #+#             */
/*   Updated: 2015/12/14 11:13:43 by fhenri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *mot)
{
	int		a;
	int		j;
	char	*copie;

	if (mot == NULL)
		return (NULL);
	a = ft_strlen(mot);
	copie = (char*)malloc(sizeof(char) * a + 1);
	if (copie == NULL)
		return (NULL);
	j = 0;
	while (j < a)
	{
		copie[j] = mot[j];
		j++;
	}
	copie[j] = '\0';
	return (copie);
}
