/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhenri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 09:59:09 by fhenri            #+#    #+#             */
/*   Updated: 2015/12/14 09:55:02 by fhenri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int a;
	int b;

	b = 0;
	a = ft_strlen(s1);
	while (s2[b])
	{
		s1[a] = s2[b];
		a++;
		b++;
	}
	s1[a] = '\0';
	return (s1);
}
