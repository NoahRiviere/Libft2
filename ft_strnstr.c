#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	l_len;

	if (*little == 0)
		return ((char *)big);
	i = 0;
	l_len = ft_strlen(little);
	while (i < len)
	{
		if (ft_strncmp(big + i, little, l_len) == 0)
			return ((char *)(big + i));
		i++;
	}
	return (0);
}
