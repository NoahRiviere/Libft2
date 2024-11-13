/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norivier <norivier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:46:12 by norivier          #+#    #+#             */
/*   Updated: 2024/11/13 17:46:12 by norivier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*out;
	size_t	len_s;

	if (!s)
		return (0);
	len_s = ft_strlen(s);
	if (len_s < start)
		len = 0;
	if (len > len_s - start)
		len = len_s - start;
	out = malloc(sizeof(char) * (len + 1));
	if (out)
	{
		ft_memcpy(out, s + start, len);
		out[len] = 0;
	}
	return (out);
}
