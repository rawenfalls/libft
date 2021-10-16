/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraynald <eraynald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 13:35:54 by eraynald          #+#    #+#             */
/*   Updated: 2021/10/16 15:20:28 by eraynald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*print_in_string(char const *s, int i, char *p, char c)
{
	int	count;
	int	e;

	e = i;
	count = -1;
	while (s[++e])
	{
		if (s[e] == c)
			break ;
	}
	while (i + (++count) < e)
		p[count] = s[i + count];
	p[count] = '\0';
	i = e;
	return (p);
}

int	count_c(char const *s, char c)
{
	int	i;
	int	is_c;
	int	word;

	i = -1;
	word = 0;
	is_c = 0;
	while (s[++i])
	{
		if (s[i] != c && is_c == 0)
		{
			is_c = 1;
			word++;
		}
		else
			is_c = 0;
	}
	return (word + 1);
}

int	detect(int i, char const *s, char c)
{
	int	e;

	e = i;
	while (s[++e])
	{
		if (s[e] == c)
			return (e);
	}
	return (e);
}

int	prodlenie_str(char const *s, char c, char	**p, int str)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			p[str] = malloc(sizeof(char) * (detect(i, s, c) - i + 1));
			if (p[str] == NULL)
				return (-1);
			p[str] = print_in_string(s, i, p[str], c);
			i = detect(i, s, c) - 1;
			str++;
		}
		i++;
	}
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**p;
	int		str;

	if (!s)
		return (NULL);
	str = 0;
	if (s[0] == '\0')
	{
		p = malloc(sizeof(char *));
		p[0] = malloc(sizeof(char));
		p[0] = NULL;
		return (p);
	}
	p = malloc(sizeof(char *) * count_c(s, c));
	if (p == NULL)
		return (NULL);
	str = prodlenie_str(s, c, p, str);
	if (str == -1)
		return (NULL);
	p[str] = malloc(sizeof(char));
	if (p[str] == NULL)
		return (NULL);
	p[str] = NULL;
	return (p);
}
