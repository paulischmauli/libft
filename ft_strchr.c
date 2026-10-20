/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strchr.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: paziehen <paziehen@student.42vienna.com>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/20 18:04:27 by paziehen         #+#    #+#              */
/*   Updated: 2026/10/20 18:16:34 by paziehen        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	needle;

	str = (unsigned char *)s;
	needle = (unsigned char)c;
	i = -1;
	while (str[++i])
	{
		if (str[i] == needle)
			return ((char *)str + i);
	}
	if (needle == '\0')
		return ((char *)str + i);
	return (NULL);
}
