/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estrong <estrong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 18:54:23 by estrong           #+#    #+#             */
/*   Updated: 2021/12/07 21:11:09 by estrong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Write a function named `ft_printf` that will mimic the real printf with the following constraints:

- It will manage only the following conversions: s,d and x
- It will manage the minimum field width. (we will never test with a field with of 0)
- It will manage only the precison flag `.`.

Your function must be declared as follows:

int ft_printf(const char *, ... );

Before you start we advise you to read the `man 3 printf` and the `man va_arg`.

To test your program compare your results with the true printf.
*/

#include <stdarg.h>

void	ft_putchar(int *i, char c)
{
	write(1, &c, 1);
	(*i)++;
}

void	ft_check(int *i, char *str, va_list ap)
{
	if (*str == 's')
		ft_s(str, i, ap);
	else if (*str == 'd')
		ft_di(i, ap);
	else if (*str == 'x')
		ft_x(str, i, ap);
	else
		ft_putchar(i, *str);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	ap;

	i = 0;
	va_start(ap, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			ft_check(&i, (char *)str, ap);
			str++;
		}
		else
			ft_putchar(&i, *str++);
	}
	va_end(ap);
	return (i);
}