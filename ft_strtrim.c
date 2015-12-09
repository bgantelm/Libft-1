/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhenri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 10:03:06 by fhenri            #+#    #+#             */
/*   Updated: 2015/12/08 17:03:34 by fhenri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strtrim(char const *s)
{
	char	*tab;
	int		a;
	int		b;

	if (s == NULL)
		return (NULL);
	a = ft_strlen(s);
	tab = (char*)malloc(sizeof(char) * a + 1);
	if (tab == NULL)
		return (NULL);
	a = 0;
	b = 0;
	while (s[a] == ' ' || s[a] == '\n' || s[a] == '\t')
		a++;
	while (s[a])
		tab[b++] = s[a++];
	a--;
	while (s[a] == ' ' || s[a] == '\n' || s[a] == '\t')
	{
		tab[b] = '\0';
		b--;
		a--;
	}
	tab[b] = '\0';
	return (tab);
}
