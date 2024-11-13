/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norivier <norivier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:45:43 by norivier          #+#    #+#             */
/*   Updated: 2024/11/13 17:45:44 by norivier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*out;
	size_t	len_1;
	size_t	len_2;

	if (!s1 && s2)
		return (ft_strdup(s2));
	if (s1 && !s2)
		return (ft_strdup(s1));
	if (!s1 && !s2)
		return (0);
	len_1 = ft_strlen(s1);
	len_2 = ft_strlen(s2);
	out = malloc((len_1 + len_2 + 1) * sizeof(char));
	if (!out)
		return (0);
	out[len_1 + len_2] = 0;
	ft_memcpy(out + len_1, s2, len_2);
	return (ft_memcpy(out, s1, len_1));
}
