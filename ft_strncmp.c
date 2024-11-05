#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	if (n == 0)
		return (0);
	i = 0;
	while ((unsigned char)(s1[i]) == (unsigned char)(s2[i])
			&& s1[i] && i < n - 1)
		i++;
	return ((unsigned char)(s1[i]) - (unsigned char)(s2[i]));
}
