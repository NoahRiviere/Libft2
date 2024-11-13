/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norivier <norivier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:45:05 by norivier          #+#    #+#             */
/*   Updated: 2024/11/13 17:45:06 by norivier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	uint8_t	*d;

	d = (uint8_t *)s;
	while (n-- > 0)
		d[n] = c;
	return (s);
}
