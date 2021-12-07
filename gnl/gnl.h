/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estrong <estrong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 18:54:18 by estrong           #+#    #+#             */
/*   Updated: 2021/12/07 19:11:53 by estrong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef GNL_H
# define GNL_H

# include <stdio.h>		// для функции printf
# include <stdlib.h>	// для функции free
# include <unistd.h>	// для функции read

int	get_next_line(char **line);

#endif
