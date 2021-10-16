/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraynald <eraynald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 17:17:57 by eraynald          #+#    #+#             */
/*   Updated: 2021/10/13 17:17:20 by eraynald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	step(int len)
{
	int	i;

	i = 1;
	while (--len > 0)
		i *= 10;
	return (i);
}

char	*in_len(int trig, int n, int len, char *p, int trig_min_int)
{
	int	i;

	i = 0 + trig;
	if (trig == 1)
	{
		p[0] = '-';
		if (trig_min_int == 1)
			n = n*-1 -1;
		else
			n *= -1;
	}
	if (n == 0) 
		return ("0\0");
	while (i < len + trig)
	{
		p[i] = n / step(len - i + trig) + 48;
		n %= step(len - i + trig);
		i++;
	}
	if (trig_min_int == 1)
		p[i - 1] += 1;
	p[len + trig] = '\0';
	return (p);
}

char	*ft_itoa(int n)
{
	int			len;
	long int	i;
	char		*p;
	int			trig;
	int			trig_min_int;

	trig_min_int = 0;
	if (n == -2147483648)
		trig_min_int = 1;
	trig = 0;
	if (n < 0)
		trig = 1;
	len = 0;
	i = n;
	while (i != 0)
	{
		len++;
		i = i / 10;
	}
	if (n == 0)
		p = malloc(sizeof(char) * 2);
	else
		p = malloc(sizeof(char) * (len + 1 + trig));
	if (p == NULL)
		return (NULL);
	p = in_len(trig, n, len, p, trig_min_int);
	return (p);
}
