/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraynald <eraynald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 22:14:46 by eraynald          #+#    #+#             */
/*   Updated: 2021/10/10 18:56:32 by eraynald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = -1;
	while (((unsigned char *)s)[++i])
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return (&((char *)s)[i]);
	}	
	 if (((unsigned char *)s)[i] == (unsigned char)c)
		return (&((char *)s)[i]);
	return (NULL);
}

// char	*ft_strchr(const char *s, int c)
// {
// 	int	i;

// 	i = -1;
// 	while ((unsigned int)(s[++i]) != '\0')
// 	{
// 		if ((unsigned int)(s[i]) == (unsigned int)c)
// 			return (&((char *)s)[i]);
// 	}	
// 	 if ((unsigned int)(s[i]) == (unsigned int)c)
// 		return (&((char *)s)[i]);
// 	return (NULL);
// }