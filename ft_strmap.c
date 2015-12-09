/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhenri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 09:19:48 by fhenri            #+#    #+#             */
/*   Updated: 2015/12/01 13:51:17 by fhenri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*s2;
	int		a;

	a = 0;
	if (s != NULL && f != NULL)
	{
		s2 = (char *)malloc(sizeof(char) * ft_strlen(s));
		if (s2 == NULL)
			return (NULL);
		while (s[a])
		{
			s2[a] = f(s[a]);
			a++;
		}
		return (s2);
	}
	return (0);
}
