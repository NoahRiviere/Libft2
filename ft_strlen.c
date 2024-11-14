/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norivier <norivier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:45:52 by norivier          #+#    #+#             */
/*   Updated: 2024/11/13 17:45:53 by norivier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdint.h>
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	const char		*start;
	const uint64_t	*s64;

	start = s;
	while (((uintptr_t)s % sizeof(uint64_t)) != 0)
	{
		if (*s == 0)
			return (s - start);
		s++;
	}
	s64 = (const uint64_t *)s;
	while (((*s64 - BYTE_MASK_64) & ~(*s64) & HIGH_BIT_MASK_64) == 0)
		s64++;
	s = (const char *)s64;
	while (*s != 0)
		s++;
	return (s - start);
}
