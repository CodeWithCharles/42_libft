/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 12:00:27 by cpoulain          #+#    #+#             */
/*   Updated: 2024/10/16 12:17:15 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	k;
	char	*big_cpy;
	size_t	little_len;

	little_len = ft_strlen(little);
	big_cpy = (char *)big;
	if (little_len < 1 || big == little)
		return (big_cpy);
	i = 0;
	while (big[i] && i < len)
	{
		k = 0;
		while (big_cpy[i + k] == little[k] && i + k < len && big_cpy[i + k]
			&& little[k])
			k++;
		if (k == little_len)
			return (&big_cpy[i]);
		i++;
	}
	return ((char *) NULL);
}
