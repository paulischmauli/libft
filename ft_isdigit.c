/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_isdigit.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: paul <paul@student.42vienna.com>          #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/13 13:19:21 by paul             #+#    #+#              */
/*   Updated: 2026/09/13 15:21:32 by paul            ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

int ft_isdigit(int c)
{
  if ('0' <= c && c <= '9')
    return (1);
  return 0;
}
//
// #include <stdio.h>
// #include "ctype.h"
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
