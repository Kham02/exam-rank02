/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estrong <estrong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 18:01:08 by estrong           #+#    #+#             */
/*   Updated: 2021/12/07 20:15:31 by estrong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Write a program that takes two strings and displays, without doubles, the

characters that appear in both strings, in the order they appear in the first one.

The display will be followed by a \n.

If the number of arguments is not 2, the program displays \n.
*/

#include <unistd.h>

void	ft_inter(char *s1, char *s2)
{
	char	arr[256] = {0};
	int		i;

	i = 0;
	while (s2[i])
	{
		arr[(int)s2[i]] = 1;
		i++;
	}
	i = 0;
	while (s1[i])
	{
		if (arr[(int)s1[i]] == 1)
		{
			write(1, &s1[i], 1);
			arr[(int)s1[i]] = 2;
		}
		i++;
	}
}

int	main(int argc, char	**argv)
{
	if (argc == 3)
		ft_inter(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}