/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrema <hrema@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 15:42:16 by hrema             #+#    #+#             */
/*   Updated: 2020/05/13 16:05:31 by hrema            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char *ptr;

	if (!(ptr = (unsigned char *)malloc(nmemb * size)))
		return (NULL);
	ft_memset(ptr, 0, nmemb * size);
	return (void *)(ptr);
}
