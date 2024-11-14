/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norivier <norivier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:45:49 by norivier          #+#    #+#             */
/*   Updated: 2024/11/13 17:47:59 by norivier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t siz)
{
	size_t	cpy_len;
	size_t	src_len;

	src_len = ft_strlen(src);
	if (siz == 0)
		return (src_len);
	if (src_len < siz - 1)
		cpy_len = src_len;
	else
		cpy_len = siz - 1;
	while (cpy_len >= sizeof(uint64_t))
	{
		*(uint64_t *)dst = *(const uint64_t *)src;
		dst += 8;
		src += 8;
		cpy_len -= 8;
	}
	while (cpy_len-- > 0)
		*dst++ = *src++;
	*dst = 0;
	return (src_len);
}
