/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhenri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 18:38:49 by fhenri            #+#    #+#             */
/*   Updated: 2015/12/09 11:32:12 by fhenri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	contage(const char *str)
{
	int a;
	int conteur;

	conteur = 0;
	a = 0;
	while (str[a] < 48 || str[a] > 57)
	{
		if (str[a] == '+')
			conteur++;
		a++;
	}
	return (conteur);
}

static int	contage1(const char *str)
{
	int a;
	int conteur1;

	conteur1 = 0;
	a = 0;
	while (str[a] < 48 || str[a] > 57)
	{
		if (str[a] == '-')
			conteur1++;
		a++;
	}
	return (conteur1);
}

static int	transfo(const char *str, int a, int signe)
{
	int n;

	n = 0;
	while (str[a] >= 48 && str[a] <= 57)
	{
		n = (n * 10) + (str[a] - 48);
		a++;
	}
	return (signe * n);
}

int			ft_atoi(const char *str)
{
	int a;
	int signe;

	a = 0;
	signe = 1;
	if (str[0] == '\0')
		return (0);
	if (contage(str) > 1 || contage1(str) > 1 ||
			(contage(str) + contage1(str)) > 1)
		return (0);
	while (str[a] < 48 || str[a] > 57)
	{
		if (str[a] == '-')
		{
			signe = -1;
			if (str[a + 1] < 48 || str[a + 1] > 57)
				return (0);
		}
		if (str[a] != ' ' && str[a] != '\v' && str[a] != '\t' && str[a] != '\r'
			&& str[a] != '\f' && str[a] != '\n'
			&& str[a] != '-' && str[a] != '+')
			return (0);
		a++;
	}
	return (transfo(str, a, signe));
}
