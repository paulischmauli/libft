/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   is_correct.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: paul <paul@student.42vienna.com>          #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/13 17:26:14 by paul             #+#    #+#              */
/*   Updated: 2026/09/13 23:01:41 by paul            ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

typedef struct s_struct{
	const char	*name;
	int (*ft_fn)(int);
	int (*og_fn)(int);
}	fn_pair;

static int	output_matches(int *ft, int *og)
{
	if ((*ft == 0 && *og != 0) || (*ft != 0 && *og == 0))
		return (0);
	return (1);
}

static void	print_error(int *ft, int *og, int index, int success)
{
	if (!success)
		printf("        ");
	printf("%s input: %d( '%c' ) ","[FAIL]", index, index);
	printf("FT: %d OG: %d\n", *ft, (*og != 0));
}
static int	run_test(fn_pair test_pair)
{
	int	ft = test_pair.ft_fn(EOF);
	int	og = test_pair.og_fn(EOF);
	int	i = -1;
	int	success = 1;

	if (!output_matches(&ft, &og))
	{
		print_error(&ft, &og, EOF, success);
		success = 0;
	}
	while (++i <= 255)
	{
		ft = test_pair.ft_fn((unsigned char)i);
		og = test_pair.og_fn((unsigned char)i);
		if (!output_matches(&ft, &og))
		{
			print_error(&ft, &og, i, success);
			success = 0;
		}
	}
	return (success);
}

static void	output_test_results(fn_pair test_pair)
{
	int	success;

	printf("%s ", test_pair.name);
	success = run_test(test_pair);
	if (success)
		printf("[OK]\n");
}

int	main(void)
{
	fn_pair test_pair[] = {
	{ .name = "isdigit", .ft_fn = ft_isdigit, .og_fn = isdigit},
	{ .name = "isalpha", .ft_fn = ft_isalpha, .og_fn = isalpha},
	{ .name = "isalnum", .ft_fn = ft_isalnum, .og_fn = isalnum},
	{ .name = "isascii", .ft_fn = ft_isascii, .og_fn = isascii},
	{ .name = "isprint", .ft_fn = ft_isprint, .og_fn = isprint},
	};
	int	i = -1;
	while (++i <= 4)
	{
		output_test_results(test_pair[i]);
	}
}
