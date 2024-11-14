/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norivier <norivier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:44:56 by norivier          #+#    #+#             */
/*   Updated: 2024/11/13 17:44:57 by norivier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdint.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	uint8_t			*d;
	const uint8_t	*s;

	if (!dest && !src)
		return (0);
	d = (uint8_t *)dest;
	s = (const uint8_t *)src;
	while (n >= 8)
	{
		*(uint64_t *)d = *(const uint64_t *)s;
		d += 8;
		s += 8;
		n -= 8;
	}
	while (n--)
		*d++ = *s++;
	return (dest);
}
