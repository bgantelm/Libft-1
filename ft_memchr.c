/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhenri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 18:07:03 by fhenri            #+#    #+#             */
/*   Updated: 2015/12/14 10:56:58 by fhenri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		*ss;
	size_t				a;
	unsigned char		stop;

	a = 0;
	stop = (unsigned char)c;
	ss = (unsigned char*)s;
	while (a < n)
	{
		if (ss[a] == stop)
			return (ss + a);
		a++;
	}
	return (NULL);
}
