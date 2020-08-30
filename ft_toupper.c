/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrema <hrema@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 15:32:43 by hrema             #+#    #+#             */
/*   Updated: 2020/05/13 17:05:40 by hrema            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_toupper(int c)
{
	c = (unsigned char)c;
	if (c >= 97 && c <= 122)
		return (int)(c - 32);
	return (int)(c);
}