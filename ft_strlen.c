/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strlen.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: paul <paul@student.42vienna.com>          #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/16 12:36:24 by paul             #+#    #+#              */
/*   Updated: 2026/09/16 14:00:16 by paul            ###   ########.fr        */
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
