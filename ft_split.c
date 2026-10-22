/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_split.c                                        :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: paziehen <paziehen@student.42vienna.com>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/22 15:51:48 by paziehen         #+#    #+#              */
/*   Updated: 2026/10/22 19:05:27 by paziehen        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	get_word_count(char const *s, char c)
{
	int	in_word = 0;
	size_t	count = 0;
	size_t	i = -1;

	while (s[++i])
	{
		if(!in_word && s[i] != c)
		{
			count++;
			in_word++;
		}
		else if (in_word && s[i] == c)
			in_word--;
	}
	return (count);
}

static size_t	ft_strlen_delimiter(const char *s, char c)
{
	const char	*str;

	str = s;
	while (*str && *str != c)
		str++;
	return (str - s);
}

static size_t	get_starting_point(char const *s, size_t start, char c)
{
	while (s[start] && s[start] == c)
		start++;
	return (start);
}

static void	*free_everything(char ***split, size_t i)
{
	while (i)
		free((*split)[i--]);
	free((*split)[i]);
	return (free(*split), *split = NULL, NULL);
}

char	**ft_split(char const *s, char c)
{
	unsigned int	words_max;
	unsigned int	words_now;
	size_t	start;
	char	**split;

	words_max = get_word_count(s, c);
	split = malloc((words_max + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	start = 0;
	words_now = -1;
	while (++words_now < words_max)
	{
		start = get_starting_point(s, start, c);
		if (!s[start])
			break ;
		split[words_now] = ft_substr(s, start, ft_strlen_delimiter(s + start, c));
		if (!split[words_now])
			return (free_everything(&split, words_now));
		start = start + ft_strlen_delimiter(s + start, c);
	}
	split[words_now] = NULL;
	return (split);
}
//
// int	main(int ac, char **av)
// {
// 	int i = 0;
// 	if (ac != 3)
// 		return (0);
// 	char	**split = ft_split(av[1], av[2][0]);
// 	while (split[i])
// 	{
// 		printf("%s\n", split[i]);
// 		i++;
// 	}
// 	free_everything(&split, i);
// }
