#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*out;

	if (!s)
		return (0);
	out = malloc(sizeof(char) * (len + 1));
	if (!out)
		return (0);
	ft_memcpy(out, s + start, len);
	out[len] = 0;
	return (out);
}
