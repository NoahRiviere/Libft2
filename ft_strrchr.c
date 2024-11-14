/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norivier <norivier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:46:06 by norivier          #+#    #+#             */
/*   Updated: 2024/11/13 17:46:06 by norivier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*last_oc;

	last_oc = 0;
	while (*s)
	{
		if ((unsigned char)*s == (unsigned char)c)
			last_oc = (char *)s;
		s++;
	}
	if ((unsigned char)*s == (unsigned char)c)
		last_oc = (char *)s;
	return (last_oc);
}
