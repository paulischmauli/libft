/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strrchr.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: paziehen <paziehen@student.42vienna.com>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/20 18:19:38 by paziehen         #+#    #+#              */
/*   Updated: 2026/10/20 18:29:29 by paziehen        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	needle;
	unsigned char	*str;
	ssize_t			i;

	needle = (unsigned char) c;
	str = (unsigned char *) s;
	i = -1;
	while (str[++i])
		;
	while (i >= 0)
	{
		if (str[i] == needle)
			return ((char *)str + i);
		i--;
	}
	return (NULL);
}
