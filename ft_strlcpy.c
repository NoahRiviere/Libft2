#include "libft.h"

size_t	ft_strlcpy(char *dst, const char * src, size_t siz)
{
	int	i;

	if (siz > 0)
	{
		i = 0;
		while (src[i] && i < siz - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	return (ft_strlen(src));
}
