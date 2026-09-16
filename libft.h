#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stddef.h>
//	highly illegal headerfiles for testing purposes
# include <stdio.h>
# include <ctype.h>
# include <string.h>

int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
size_t	ft_strlen(const char *s);
#endif
