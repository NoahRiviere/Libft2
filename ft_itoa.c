/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norivier <norivier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:44:15 by norivier          #+#    #+#             */
/*   Updated: 2024/11/13 17:44:16 by norivier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	ft_get_nblen(int n)
{
	size_t			nblen;

	nblen = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		nblen++;
	while (n)
	{
		nblen++;
		n /= 10;
	}
	return (nblen);
}

char	*ft_itoa(int n)
{
	size_t			wordlen;
	char			*word;
	unsigned int	d;

	wordlen = ft_get_nblen(n);
	word = malloc(sizeof(char) * (wordlen + 1));
	if (!word)
		return (0);
	word[wordlen] = 0;
	d = n;
	if (n < 0)
	{
		word[0] = '-';
		d = -n;
	}
	if (d == 0)
		word[0] = '0';
	while (d)
	{
		wordlen--;
		word[wordlen] = d % 10 + '0';
		d /= 10;
	}
	return (word);
}
