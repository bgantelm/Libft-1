/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhenri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 16:40:36 by fhenri            #+#    #+#             */
/*   Updated: 2015/12/04 11:39:19 by fhenri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	contage(const char *s1)
{
	size_t a;

	a = 0;
	while (s1[a])
		a++;
	return (a);
}

char			*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	a;
	size_t	index;

	if (s1 == NULL || n == 0)
		return (NULL);
	index = contage(s2);
	if (n < index)
		return (NULL);
	if (s2[0] == '\0')
		return ((char *)s1);
	a = 0;
	while (s1[a] && a <= (n - index))
	{
		if (ft_strncmp(&s1[a], s2, index) == 0)
			return ((char*)&s1[a]);
		a++;
	}
	return (NULL);
}
