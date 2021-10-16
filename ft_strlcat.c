/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraynald <eraynald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 21:42:29 by eraynald          #+#    #+#             */
/*   Updated: 2021/10/16 14:25:35 by eraynald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
// {
// 	size_t	i;
// 	size_t	siz;
// 	size_t	siz1;
// 	siz = 0;
// 	siz1 = 0;
// 	while (dst[siz] != '\0')
// 		siz++;
// 	while (src[siz1] != '\0')
// 		siz1++;
// 	if (dstsize <= siz)
// 	{
// 		if (siz1 < dstsize)
// 			return (dstsize+1000+siz);
// 		else
// 			return (10000+siz);
// 	}
// 	i = 0;
// 	while (src[i] != '\0')
// 	{
// 		if (i < dstsize )
// 			dst[i + siz] = src[i];
// 		else
// 		{
// 			dst[i + siz] = '\0';
// 			return (siz + i);
// 		}
// 		i++;
// 	}
// 	dst[i + siz] = '\0';
// 	return (siz + i);
// }

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char		*d;
	const char	*s;
	size_t		n;
	size_t		dlen;

	d = dst;
	s = src;
	n = dstsize;
	while (n-- != 0 && *d != '\0')
		d++;
	dlen = d - dst;
	n = dstsize - dlen;
	if (n == 0)
		return (dlen + strlen(s));
	while (*s != '\0')
	{
		if (n != 1)
		{
			*d++ = *s;
			n--;
		}
		s++;
	}
	*d = '\0';
	return (dlen + (s - src));
}
