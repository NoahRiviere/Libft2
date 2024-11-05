#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*out;
	int		total_size;

	if (size == 0 || nmemb == 0)
		return (0);
	total_size = nmemb * size;
	if (total_size / nmemb != size)
		return (0);
	out = malloc(total_size);
	if (!out)
		return (0);
	return (ft_memset(out, 0, total_size));
}
