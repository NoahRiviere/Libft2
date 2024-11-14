/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norivier <norivier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:43:56 by norivier          #+#    #+#             */
/*   Updated: 2024/11/13 17:43:57 by norivier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*out;
	int		total_size;

	if (size == 0)
		return (malloc(0));
	total_size = nmemb * size;
	if (total_size / size != nmemb)
		return (0);
	out = malloc(total_size);
	if (!out)
		return (0);
	return (ft_memset(out, 0, total_size));
}
