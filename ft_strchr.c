/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norivier <norivier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:45:33 by norivier          #+#    #+#             */
/*   Updated: 2024/11/13 17:45:34 by norivier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	uint64_t	matches;
	uint64_t	chunk;

	while ((uintptr_t)s % sizeof(uint64_t) != 0)
	{
		if ((uint8_t)*s == (uint8_t)c)
			return ((char *)s);
		if (*s++ == 0)
			return (0);
	}
	while (1)
	{
		chunk = *(const uint64_t *)s;
		matches = chunk ^ ((uint8_t)c * BYTE_MASK_64);
		if (((matches - BYTE_MASK_64) & ~matches & HIGH_BIT_MASK_64) != 0)
			break ;
		if (((chunk - BYTE_MASK_64) & ~chunk & HIGH_BIT_MASK_64) != 0)
			return (0);
		s += sizeof(uint64_t);
	}
	while (*s)
		if ((uint8_t)*s++ == (uint8_t)c)
			return ((char *)(s - 1));
	if ((uint8_t)*s == (uint8_t)c)
		return ((char *)s);
	return (0);
}
