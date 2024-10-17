/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 16:13:49 by cpoulain          #+#    #+#             */
/*   Updated: 2024/10/17 17:08:59 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char			*dst;
	unsigned int	i;

	i = ft_strlen(s);
	dst = malloc(i + 1);
	if (dst)
	{
		dst[i] = '\0';
		while (i--)
			dst[i] = f(i, s[i]);
	}
	return (dst);
}
