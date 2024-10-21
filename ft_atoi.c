/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 16:45:02 by cpoulain          #+#    #+#             */
/*   Updated: 2024/10/21 13:08:43 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	ans;
	int	sign;

	ans = 0;
	sign = 1;
	while (*nptr == '\f' || *nptr == '\n'
		|| *nptr == '\v' || *nptr == '\t' || *nptr == '\r' || *nptr == ' ')
		nptr++;
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	while (ft_isdigit(*nptr))
	{
		ans = 10 * ans + (*nptr - '0');
		nptr++;
	}
	return (ans * sign);
}
