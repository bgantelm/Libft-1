/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhenri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 15:06:43 by fhenri            #+#    #+#             */
/*   Updated: 2015/12/01 13:47:32 by fhenri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ss;
	int		a;

	a = 0;
	if (s != NULL && f != NULL)
	{
		ss = (char *)malloc(sizeof(char) * ft_strlen(s));
		if (ss == NULL)
			return (NULL);
		while (s[a] != '\0')
		{
			ss[a] = f(a, s[a]);
			a++;
		}
		return (ss);
	}
	return (0);
}
