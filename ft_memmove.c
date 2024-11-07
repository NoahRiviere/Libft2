#include <stddef.h>
#include <stdint.h>
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	uint8_t			*d;
	const uint8_t	*s;

	d = (uint8_t *)dest;
	s = (const uint8_t *)src;
	if (d < s)
	{
		while (n >= 8)
		{
			*(uint64_t *)d = *(const uint64_t *)s;
			d += 8;
			s += 8;
			n -= 8;
		}
		while (n--)
			*d++ = *s++;
	}
	else
	{
		while (n >= 8)
		{
			((uint64_t *)d)[n] = ((const uint64_t *)s)[n];
			n -= 8;
		}
		while (n--)
			d[n] = s[n];
	}
	return (dest);
}

#include <stdlib.h>

int main(void)
{
	char	*test = malloc(42);

	for (int i = 0, j = 'a'; j <= 'z'; i++, j++)
		test[i] = j;
	test[26] = 0;
	char	*a = test + 1;
	char	*p = test + 2;
	printf("%s\n", test);
	ft_memmove(test, p, 9);
	printf("%s\n", test);
}
