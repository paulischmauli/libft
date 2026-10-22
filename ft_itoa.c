/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_itoa.c                                         :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: paziehen <paziehen@student.42vienna.com>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/22 20:39:36 by paziehen         #+#    #+#              */
/*   Updated: 2026/10/22 22:04:17 by paziehen        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	allocate_number(int n, char **nbr)
{
	unsigned int	n_digits;

	n_digits = 0;
	if (n <= 0)
		n_digits++;
	while (n)
	{
		n = n / 10;
		n_digits++;
	}
	*nbr = malloc(n_digits + 1);
	return (n_digits);
}

static void	build_negative(unsigned int n_digits, int n, char **nbr)
{
	int	value;

	while (n_digits > 0)
	{
		value = n % 10 * (-1);
		(*nbr)[n_digits] = value + '0';
		n = n / 10;
		n_digits--;
	}
	(*nbr)[n_digits] = '-';
}

static void	build_positive(unsigned int n_digits, int n, char **nbr)
{
	while (n_digits)
	{
		(*nbr)[n_digits] = n % 10 + '0';
		n = n / 10;
		n_digits--;
	}
	(*nbr)[n_digits] = n % 10 + '0';
}

char	*ft_itoa(int n)
{
	char			*nbr;
	unsigned int	n_digits;

	n_digits = allocate_number(n, &nbr);
	if (!nbr)
		return (NULL);
	nbr[n_digits--] = '\0';
	if (!n)
	{
		nbr[n_digits] = '0';
		return (nbr);
	}
	if (n > 0)
		build_positive(n_digits, n, &nbr);
	else
		build_negative(n_digits, n, &nbr);
	return (nbr);
}
