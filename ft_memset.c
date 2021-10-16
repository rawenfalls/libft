/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraynald <eraynald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 21:42:20 by eraynald          #+#    #+#             */
/*   Updated: 2021/10/06 21:48:59 by eraynald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	write_s(void *q)
// {
// 	int	i;

// 	i = 0;
// 		while (((char *)&q[0])[i] != '\0')
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

void	*ft_memset(void *arr, int simb, size_t col)
{
	size_t	i;
	char	*c;

	i = 0;
	c = arr;
	while (i < col)
		c[i++] = simb;
	return (c);
}
