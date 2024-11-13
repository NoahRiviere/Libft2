/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norivier <norivier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:45:29 by norivier          #+#    #+#             */
/*   Updated: 2024/11/13 17:45:29 by norivier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_wordcount(char const *s, char c)
{
	size_t	count;
	size_t	wlen;

	count = 0;
	if (!s)
		return (0);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		wlen = 0;
		while (*s && *s != c)
		{
			wlen++;
			s++;
		}
		if (wlen > 0)
			count++;
	}
	return (count);
}

static void	ft_free_words(char **words)
{
	size_t	i;

	i = 0;
	while (words[i])
	{
		free(words[i]);
		i++;
	}
	free(words);
}

static int	ft_get_words(char const *s, char **word, char c)
{
	size_t	wlen;
	size_t	i;

	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		wlen = 0;
		while (s[i] && s[i] != c)
		{
			wlen++;
			i++;
		}
		if (wlen > 0)
		{
			*word = ft_substr(s, i - wlen, wlen);
			if (!word)
				return (ft_free_words(word), 0);
			word++;
		}
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	size_t	len;
	char	**words;

	len = ft_wordcount(s, c);
	words = malloc(sizeof(char *) * (len + 1));
	if (!words)
		return (0);
	ft_memset(words, 0, sizeof(char *) * (len + 1));
	if (!ft_get_words(s, words, c))
		return (0);
	return (words);
}
