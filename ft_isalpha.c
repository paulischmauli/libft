// #include "libft.h"
static int ft_isupper(int c) {
  if ('A' <= (unsigned char)c && (unsigned char)c <= 'Z')
    return 1;
  return 0;
}
static int ft_islower(int c) {
  if ('a' <= (unsigned char)c && (unsigned char)c <= 'z')
    return 1;
  return 0;
}
int ft_isalpha(int c) {
  if (ft_isupper(c) || ft_islower(c))
    return 1;
  return 0;
}
//
// #include <ctype.h>
// #include <stdio.h>
//
// int main(int ac, char **av) {
//   if (ac != 2)
//     return 0;
//   printf("FT: %d\n", ft_isalpha((unsigned char)*av[1]));
//   printf("OG: %d\n", isalpha((unsigned char)*av[1]));
// }
