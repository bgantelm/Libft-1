/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhenri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 18:38:49 by fhenri            #+#    #+#             */
/*   Updated: 2015/12/14 12:43:40 by fhenri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_atoi(const char *str)
{
	int a;
	int n;
	int signe;

	a = 0;
	signe = 1;
	if (str[a] == '\0')
		return (0);
	while (str[a] == ' ' || str[a] == '\t' || str[a] == '\n'
		|| str[a] == '\v' || str[a] == '\f' || str[a] == '\r')
		a++;
	if (str[a] == '-' || str[a] == '+')
	{
		if (str[a] == '-')
			signe = -1;
		a++;
	}
	while (str[a] >= 48 && str[a] <= 57)
	{
		n = (n * 10) + (str[a] - 48);
		a++;
	}
	return (n * signe);
}
