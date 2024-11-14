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

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n >= sizeof(uint64_t))
	{
		if (*(const uint64_t *)s1 ^ *(const uint64_t *)s2)
			break;
		s1 += sizeof(uint64_t);
		s2 += sizeof(uint64_t);
		n -= sizeof(uint64_t);
	}
	while (n > 0)
	{
		if ((uint8_t)*s1 ^ (uint8_t)*s2)
			return ((uint8_t)*s1 - (uint8_t)*s2);
		s1++;
		s2++;
		n--;
	}
	return (0);
}
