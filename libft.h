#ifndef LIBFT_H
# define LIBFT_H

#include <stddef.h>

int		ft_isalpha(int c);
int		ft_isdigit(int c);
size_t	ft_strlen(const char *s);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memset(void *s, int c, size_t n);

#endif // LIBFT_H
