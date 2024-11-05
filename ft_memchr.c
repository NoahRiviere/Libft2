#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((void *)(((unsigned char *)s) + i));
		i++;
	}
	return ((void *)(0));
}
