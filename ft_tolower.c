/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrema <hrema@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 15:37:03 by hrema             #+#    #+#             */
/*   Updated: 2020/05/13 17:05:46 by hrema            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_tolower(int c)
{
	c = (unsigned char)c;
	if (c >= 65 && c <= 90)
		return (int)(c + 32);
	return (int)(c);
}