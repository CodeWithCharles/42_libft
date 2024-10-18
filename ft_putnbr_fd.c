/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:31:01 by cpoulain          #+#    #+#             */
/*   Updated: 2024/10/18 18:16:34 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Static declaration */

static void	_ft_putnbr_fd(long n, int fd);

/* ft_putnbr_fd */

void	ft_putnbr_fd(int n, int fd)
{
	long	_n;

	_n = n;
	if (_n < 0)
	{
		ft_putchar_fd('-', fd);
		_n = -_n;
	}
	_ft_putnbr_fd(_n, fd);
}

/* Static implementation */

static void	_ft_putnbr_fd(long n, int fd)
{
	if (n > 9)
		_ft_putnbr_fd(n / 10, fd);
	ft_putchar_fd((n % 10) + '0', fd);
}
