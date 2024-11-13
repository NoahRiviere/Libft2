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

	d = (uint8_t *)dest;
	s = (const uint8_t *)src;
	if (d < s)
		return (ft_memcpy(dest, src, n));
	while (n >= 8)
	{
		((uint64_t *)d)[n] = ((const uint64_t *)s)[n];
		n -= 8;
	}
	while (n--)
		d[n] = s[n];
	return (dest);
}
