/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norivier <norivier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:45:59 by norivier          #+#    #+#             */
/*   Updated: 2024/11/13 17:46:00 by norivier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdint.h>
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	uint64_t	s1_chunk;

	if (n == 0)
		return (0);
	while (n >= sizeof(uint64_t))
	{
		s1_chunk = *(const uint64_t *)s1;
		if (s1_chunk ^ *(const uint64_t *)s2)
			break ;
		if ((s1_chunk - BYTE_MASK_64) & ~s1_chunk & HIGH_BIT_MASK_64)
			return (0);
		s1 += sizeof(uint64_t);
		s2 += sizeof(uint64_t);
		n -= sizeof(uint64_t);
	}
	while (n-- > 1 && *s1 && *(uint8_t *)s1 == *(uint8_t *)s2)
	{
		s1++;
		s2++;
	}
	return (*(uint8_t *)s1 - *(uint8_t *)s2);
}
