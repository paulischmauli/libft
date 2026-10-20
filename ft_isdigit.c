/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_isdigit.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: paziehen <paziehen@student.42vienna.com>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/20 12:45:30 by paziehen         #+#    #+#              */
/*   Updated: 2026/10/20 12:45:34 by paziehen        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isdigit(int c)
{
  if (48 <= c && c <= 57)
    return (1);
  return 0;
}
//
// int main()
// {
//   int i = -2;
//   int ft;
//   int og;
//
//   while (++i <= 255)
//   {
//     ft = ft_isdigit((unsigned char)i);
//     og = isdigit((unsigned char)i);
//     if ((ft == 0 && og != 0) || (ft != 0 && og == 0))
//     {
//       printf("....DIF...\n");
//       printf("Index: %d\nASCII: %c\n", i, i);
//       printf("FT: %d\n", ft);
//       printf("OG: %d\n", og);
//     }
//   }
//     printf("....END....\n");
// }
