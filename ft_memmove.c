/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhenri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 16:13:11 by fhenri            #+#    #+#             */
/*   Updated: 2015/12/09 15:28:44 by fhenri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s1;
	char	*s2;
	char	*s3;
	size_t	a;

	if (dst == NULL || src == NULL)
		return (dst);
	s1 = (char*)dst;
	s2 = (char*)src;
	s3 = (char*)malloc(sizeof(char) * ft_strlen(s2));
	if (s3 == NULL)
		return (NULL);
	a = 0;
	s3 = ft_strcpy(s3, s2);
	while (a < len)
	{
		s1[a] = s3[a];
		a++;
	}
	return (char*)(s1);
}
