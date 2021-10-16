/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraynald <eraynald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 12:56:29 by eraynald          #+#    #+#             */
/*   Updated: 2021/10/16 16:59:25 by eraynald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*checker_malloc(char	*p, int i)
{
	p = malloc(sizeof(char) * i);
	if (p == NULL)
		return (NULL);
	return (p);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	i;
	size_t	size;

	if (!s)
		return (NULL);
	p = NULL;
	if (len == 0)
		return (checker_malloc(p, 1));
	p = malloc(sizeof(char) * (len + 1));
	if (p == NULL)
		return (NULL);
	size = 0;
	while (s[size])
		size++;
	i = 0;
	while (i < len && i + (size_t)start < size)
	{
		p[i] = s[i + (size_t)start];
		i++;
	}
	p[i] = '\0';
	return (p);
}
