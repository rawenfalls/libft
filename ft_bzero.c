/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraynald <eraynald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 21:41:40 by eraynald          #+#    #+#             */
/*   Updated: 2021/10/06 21:51:45 by eraynald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	write_s(void *q)
// {
// 	int	i;

// 	i = 0;
// 		while (((char *)&q[0])[i] != 'e')
// 	{
// 		if(((char *)&q[0])[i] == '\0')
// 		write(1, "*", 1);
// 		else
// 		write(1, &q[i], 1);
// 		write(1, "|", 1);
// 		i++;
// 	}
// 	write(1, "\n", 1);
// }

void	ft_bzero(void *arr, size_t col)
{
	char	*c;
	size_t	i;

	c = arr;
	i = 0;
	while (i < col)
		c[i++] = '\0';
}
