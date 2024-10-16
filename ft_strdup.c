/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:57:09 by cpoulain          #+#    #+#             */
/*   Updated: 2024/10/16 16:05:42 by cpoulain         ###   ########.fr       */
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
		ft_strlcpy(cpy, s, s_len + 1);
	return (cpy);
}
