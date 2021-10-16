/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraynald <eraynald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 21:41:48 by eraynald          #+#    #+#             */
/*   Updated: 2021/10/16 14:20:39 by eraynald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int e)
{
	if ((e >= 48 && e <= 57) || (e >= 65 && e <= 90) || (e >= 97 && e <= 122))
		return (1);
	return (0);
}