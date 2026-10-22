/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strtrim.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: paziehen <paziehen@student.42vienna.com>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/22 14:44:10 by paziehen         #+#    #+#              */
/*   Updated: 2026/10/22 15:47:55 by paziehen        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	in_set(char c, char const *set)
{
	while (*set)
	{
		if (c == *(set++))
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	start = -1;
	while (s1[++start] && in_set(s1[start], set))
		;
	end = ft_strlen(s1);
	if (start == end)
		return (ft_substr(s1, start, end - start));
	while (start < end && in_set(s1[end - 1], set))
		end --;
	return (ft_substr(s1, start, end - start));
}
