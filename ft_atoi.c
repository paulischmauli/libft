/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_atoi.c                                         :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: paziehen <paziehen@student.42vienna.com>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/21 17:12:29 by paziehen         #+#    #+#              */
/*   Updated: 2026/10/23 19:15:45 by paziehen        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r'
		|| c == ' ')
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	size_t	i;
	int		result;
	int		fac;

	result = 0;
	fac = 1;
	i = 0;
	while (ft_isspace((unsigned char)nptr[i]))
		i++;
	if (nptr[i] == '-')
	{
		fac = -1;
		i++;
	}
	else if (nptr[i] == '+')
		i++;
	while (ft_isdigit((unsigned char)nptr[i]))
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return (result * fac);
}
