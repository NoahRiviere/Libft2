#include "libft.h"

static int	ft_isspace(int c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}

int	ft_atoi(const char *nptr)
{
	long long	out;
	int			sign;

	while (ft_isspace(*nptr))
		nptr++;
	sign = 1;
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	out = 0;
	while (ft_isdigit(*nptr))
	{
		out = out * 10 + *nptr - '0';
		nptr++;
	}
	return (out * sign);
}
