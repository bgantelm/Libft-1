/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhenri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 15:24:56 by fhenri            #+#    #+#             */
/*   Updated: 2015/12/08 12:16:46 by fhenri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char	*source;
	char	*destination;
	char	stop;
	size_t	a;

	a = 0;
	source = (char*)src;
	destination = (char*)dst;
	stop = (char)c;
	if (source == NULL || destination == NULL)
		return (NULL);
	while (a < n)
	{
		destination[a] = source[a];
		if (source[a] == stop)
			return (void*)(&dst[a + 1]);
		a++;
	}
	return (NULL);
}
