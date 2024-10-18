/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:57:09 by cpoulain          #+#    #+#             */
/*   Updated: 2024/10/18 18:26:01 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*cpy;
	size_t	s_len;

	s_len = ft_strlen(s);
	cpy = malloc(sizeof(char) * (s_len + 1));
	if (cpy)
		ft_memcpy(cpy, s, s_len + 1);
	return (cpy);
}
