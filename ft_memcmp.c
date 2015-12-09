/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhenri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 18:09:35 by fhenri            #+#    #+#             */
/*   Updated: 2015/12/02 15:24:24 by fhenri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			a;
	unsigned char	*ss1;
	unsigned char	*ss2;

	a = 0;
	ss1 = (unsigned char*)s1;
	ss2 = (unsigned char*)s2;
	while (a < n)
	{
		if (ss1[a] != ss2[a])
			return (ss1[a] - ss2[a]);
		a++;
	}
	return (0);
}
