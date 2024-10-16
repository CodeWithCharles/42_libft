/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:00:34 by cpoulain          #+#    #+#             */
/*   Updated: 2024/10/16 15:37:43 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (dest < src)
	{
		i = 0;
		while (i < n)
		{
			((t_byte *)dest)[i] = ((t_byte *)src)[i];
			i++;
		}
	}
	else if (src < dest)
		while (n--)
			((t_byte *)dest)[n] = ((t_byte *)src)[n];
	return (dest);
}
