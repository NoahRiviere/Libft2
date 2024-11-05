#include "libft.h"

size_t	ft_strlcat(char *dst, const char * src, size_t siz)
{
	int	i;
	int	j;

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
