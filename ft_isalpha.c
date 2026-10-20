/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_isalpha.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: paziehen <paziehen@student.42vienna.com>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/20 12:44:31 by paziehen         #+#    #+#              */
/*   Updated: 2026/10/20 12:44:43 by paziehen        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static int ft_isupper(int c) {
  if ('A' <= c && c <= 'Z')
    return 1;
  return 0;
}
static int ft_islower(int c) {
  if ('a' <= c && c <= 'z')
    return 1;
  return 0;
}
int ft_isalpha(int c) {
  if (ft_isupper(c) || ft_islower(c))
    return 1;
  return 0;
}
