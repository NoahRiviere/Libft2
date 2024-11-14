/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norivier <norivier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:46:08 by norivier          #+#    #+#             */
/*   Updated: 2024/11/13 17:46:09 by norivier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	end;

	if (!s1)
		return (ft_strdup(""));
	if (!set)
		return (ft_strdup(s1));
	while (*s1 && ft_strchr(set, *s1) != 0)
		s1++;
	if (*s1 == 0)
		return (ft_strdup(""));
	end = ft_strlen(s1);
	while (end > 0 && ft_strchr(set, s1[end - 1]) != 0)
		end--;
	return (ft_substr(s1, 0, end));
}
