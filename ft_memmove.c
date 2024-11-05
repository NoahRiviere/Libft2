#include <stddef.h>

void	*memmove(void *dest, const void *src, size_t n)
{
	int	i;

	if (((unsigned int *)dest) < ((unsigned int *)src))
	{
		i = -1;
		while (++i < n)
			((unsigned int *)dest)[i] = ((unsigned int *)src)[i];
	}
	else
	{
		while (n-- > 0)
			((unsigned int *)dest)[n] = ((unsigned int *)src)[n];
	}
	return (dest);
}
