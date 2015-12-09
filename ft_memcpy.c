/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhenri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 09:56:52 by fhenri            #+#    #+#             */
/*   Updated: 2015/12/03 09:56:56 by fhenri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	a;
	char	*source;
	char	*destination;

	a = 0;
	source = (char*)src;
	destination = (char*)dst;
	while (a < n)
	{
		destination[a] = source[a];
		a++;
	}
	return (destination);
}