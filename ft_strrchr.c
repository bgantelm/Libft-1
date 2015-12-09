/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhenri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 15:11:25 by fhenri            #+#    #+#             */
/*   Updated: 2015/11/30 20:07:11 by fhenri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		a;
	char	t;

	a = 0;
	t = (char)c;
	while (s[a])
		a++;
	if (t == 0)
	{
		return (char*)(&s[a]);
	}
	a--;
	while (s[a] != t)
	{
		if (s[a] == '\0')
			return (NULL);
		a--;
	}
	return (char*)(&s[a]);
}
