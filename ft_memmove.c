/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norivier <norivier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:45:02 by norivier          #+#    #+#             */
/*   Updated: 2024/11/13 17:45:11 by norivier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	uint8_t			*d;
	const uint8_t	*s;

	if (!dest && !src)
		return (0);
	d = (uint8_t *)dest;
	s = (const uint8_t *)src;
	if (d < s)
		return (ft_memcpy(dest, src, n));
	d += n;
	s += n;
	while (n >= sizeof(uint64_t))
	{
		d -= sizeof(uint64_t);
		s -= sizeof(uint64_t);
		n -= sizeof(uint64_t);
		*(uint64_t *)d = *(uint64_t *)s;
	}
	while (n--)
		*--d = *--s;
	return (dest);
}
