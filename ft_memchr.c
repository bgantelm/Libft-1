/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhenri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 18:07:03 by fhenri            #+#    #+#             */
/*   Updated: 2015/12/02 16:21:32 by fhenri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		*ss;
	size_t				a;
	unsigned char		stop;

	stop = (unsigned char)c;
	a = 0;
	ss = (unsigned char*)s;
	while (a < n)
	{
		if (ss[a] == stop)
			return (void*)(&s[a]);
		a++;
	}
	return (NULL);
}
