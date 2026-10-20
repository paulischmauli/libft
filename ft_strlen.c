/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strlen.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: paziehen <paziehen@student.42vienna.com>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/20 12:47:50 by paziehen         #+#    #+#              */
/*   Updated: 2026/10/20 12:48:00 by paziehen        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	const char	*str;

	str = s;
	while (*str++)
		;
	return (str - s - 1);
}
//
// int main(int ac, char **av)
// {
// 	if (ac != 2)
// 		return 1;
// 	printf("%zu\n", ft_strlen(av[1]));
// 	printf("%zu\n", strlen(av[1]));
// }
