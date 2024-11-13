/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norivier <norivier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:45:22 by norivier          #+#    #+#             */
/*   Updated: 2024/11/13 17:45:23 by norivier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static size_t	ft_get_nblen(int n)
{
	size_t			nblen;

	nblen = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		nblen++;
	while (n)
	{
		nblen++;
		n /= 10;
	}
	return (nblen);
}

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	d;
	size_t			len;
	size_t			i;
	char			buffer[12];

	len = ft_get_nblen(n);
	d = n;
	if (n < 0)
	{
		buffer[0] = '-';
		d = -n;
	}
	if (d == 0)
		buffer[0] = '0';
	i = 0;
	while (d)
	{
		i++;
		buffer[len - i] = d % 10 + '0';
		d /= 10;
	}
	write(fd, buffer, len);
}
