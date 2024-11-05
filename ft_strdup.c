#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*out;
	int		len;

	len = ft_strlen(s);
	out = malloc(sizeof(char) * (len + 1));
	if (!out)
		return (0);
	while (len > -1)
	{
		out[len] = s[len];
		len--;
	}
	return (out);
}
