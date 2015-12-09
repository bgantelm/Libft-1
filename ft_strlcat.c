/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhenri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 14:08:55 by fhenri            #+#    #+#             */
/*   Updated: 2015/12/07 10:54:08 by fhenri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t long1;
	size_t long2;
	size_t a;
	size_t index;

	if (dst == NULL || src == NULL)
		return (0);
	long1 = ft_strlen(dst);
	long2 = ft_strlen(src);
	a = 0;
	if (n >= long1)
	{
		index = (n - long1 - 1);
		while (a < index)
		{
			dst[a + long1] = src[a];
			a++;
		}
		dst[a + long1] = '\0';
		return (long1 + long2);
	}
	n = long1 - n;
	return ((long1 + long2) - n);
}
