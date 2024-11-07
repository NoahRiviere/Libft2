#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	end;
	char	*out;

	if (!s1)
		return (ft_strdup(""));
	if (s1 && !set)
		return (ft_strdup(s1));
	while (*s1 && *(ft_strchr(set, *s1)) != 0)
		s1++;
	end = ft_strlen(s1);
	if (end > 0)
		end--;
	while (end && *(ft_strchr(set, s1[end])) != 0)
		end--;
	out = malloc(sizeof(char) * (end + 1));
	if (!out)
		return (0);
	return (ft_memcpy(out, s1, end + 1));
}

int main(void)
{
	char	*yolo = "   Yes I am !                       ";

	printf("|%s| -> |%s|\n", yolo, ft_strtrim(yolo, "  "));
}
