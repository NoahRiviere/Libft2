/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norivier <norivier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:45:36 by norivier          #+#    #+#             */
/*   Updated: 2024/11/13 17:45:37 by norivier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*d;
	char	*d_start;
	size_t	s_len;

	s_len = ft_strlen(s);
	d = malloc(sizeof(char) * (s_len + 1));
	if (!d)
		return (0);
	d_start = d;
	while (s_len >= sizeof(uint64_t))
	{
		*(uint64_t *)d = *(const uint64_t *)s;
		d += sizeof(uint64_t);
		s += sizeof(uint64_t);
		s_len -= sizeof(uint64_t);
	}
	while (s_len-- > 0)
		*d++ = *s++;
	*d = 0;
	return (d_start);
}
