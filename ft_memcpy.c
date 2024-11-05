#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	while (n-- > 0)
		((int *)dest)[n] = ((int *)src)[n];
	return (dest);
}
