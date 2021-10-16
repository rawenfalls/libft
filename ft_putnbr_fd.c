/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraynald <eraynald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 17:42:17 by eraynald          #+#    #+#             */
/*   Updated: 2021/10/13 18:37:44 by eraynald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	step_me(int i)
{
	int	e;
	int	stp;

	e = i;
	stp = 1;
	while (--e > 0)
		stp*=10;
	return (stp);
}

void	ft_putnbr_fd(int n, int fd)
{
	char	e;
	int		i;
	int		num;

	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	if (n < 0)
	{
		n *= -1;
		write(fd, "-", 1);
	}
	if (n == 0)
		write(fd, "0", 1);
	num = n;
	i = 0;
	while (num != 0)
	{
		num /= 10;
		i++;
	}
	while (i > 0)
	{
		num = step_me(i);
		e = n / num + '0';
		write(fd, &e, 1);
		n %= num;
		i--;
	}
}
