/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norivier <norivier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:45:46 by norivier          #+#    #+#             */
/*   Updated: 2024/11/13 17:48:06 by norivier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t siz)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (dst[i] && i < siz)
		i++;
	j = 0;
	while (src[j] && siz && i + j < siz - 1)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i + j < siz)
		dst[i + j] = 0;
	return (i + ft_strlen(src));
}
