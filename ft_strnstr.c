/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norivier <norivier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:46:03 by norivier          #+#    #+#             */
/*   Updated: 2024/11/13 17:46:03 by norivier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	l_len;

	if (*little == 0)
		return ((char *)big);
	i = 0;
	l_len = ft_strlen(little);
	while (i < len && big[i])
	{
		if (big[i] == *little && l_len + i <= len
				&& ft_strncmp(big + i, little, l_len) == 0)
			return ((char *)(big + i));
		i++;
	}
	return (0);
}
