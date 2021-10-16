/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraynald <eraynald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 23:02:11 by eraynald          #+#    #+#             */
/*   Updated: 2021/10/16 14:35:07 by eraynald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*se;

	i = -1;
	if (c > 127)
		return (NULL);
	if (s[0] == '\0' && c == '\0')
		return ((char *)s);
	if (s[0] == '\0')
		return (NULL);
	while (s[++i] != '\0')
	{
		if (s[i] == c)
			se = (char *)s + i;
	}	
	 if (s[i] == c)
		return ((char *)s + i);
	if (se != NULL)
		return (se);
	return (NULL);
}

// int	main()
// {
// 	char	str3[] = "";
// 	printf("|%s| = |%s|", ft_strrchr(str3, '\0'), strrchr(str3, '\0'));
// 	return (0);
// }