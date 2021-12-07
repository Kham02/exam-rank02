/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unoin.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estrong <estrong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 12:56:29 by estrong           #+#    #+#             */
/*   Updated: 2021/12/07 20:16:04 by estrong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Write a program that takes two strings and displays, without doubles, the

characters that appear in either one of the strings.

The display will be in the order characters appear in the command line, and

will be followed by a \n.

If the number of arguments is not 2, the program displays \n.
*/

#include <unistd.h>

void	ft_union(char *s1, char *s2)
{
	char	str[256] = {0};
	int		i;

	i = 0;
	while (s1[i])
	{
		if (str[(int)s1[i]] == 0)
		{
			write (1, &s1[i], 1);
			str[(int)s1[i]] = 1;
		}
		i++;
	}
	i = 0;
	while (s2[i])
	{
		if (str[(int)s2[i]] == 0)
		{
			write(1, &s2[i], 1);
			str[(int)s2[i]] = 1;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}