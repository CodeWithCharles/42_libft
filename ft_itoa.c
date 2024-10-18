/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:00:55 by cpoulain          #+#    #+#             */
/*   Updated: 2024/10/18 18:54:48 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Static declaration */

static void	put_nbr_in_buf(long nbr, int len, char *buf);

/* ft_itoa */

char	*ft_itoa(int n)
{
	char	*ans;
	int		len;
	long	cpy;

	cpy = n;
	len = 1;
	if (cpy < 0)
	{
		cpy = -cpy;
		len++;
	}
	while (cpy > 9)
	{
		cpy /= 10;
		len++;
	}
	ans = malloc(len + 1);
	if (ans)
		put_nbr_in_buf(n, len, ans);
	return (ans);
}

/* Static implementation */

static void	put_nbr_in_buf(long nbr, int len, char *buf)
{
	if (nbr < 0)
	{
		nbr = -nbr;
		*buf++ = '-';
		len--;
	}
	buf[len] = '\0';
	while (len--)
	{
		buf[len] = '0' + nbr % 10;
		nbr /= 10;
	}
}
