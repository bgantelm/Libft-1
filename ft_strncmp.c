/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhenri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 14:44:41 by fhenri            #+#    #+#             */
/*   Updated: 2015/12/08 14:48:49 by fhenri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t a;

	a = 0;
	while (a < n && s2[a] != '\0')
	{
		if (s1[a] != s2[a])
			return (int)(s1[a] - s2[a]);
		a++;
	}
	if (s1[a] == '\200')
		return (1);
	return (0);
}