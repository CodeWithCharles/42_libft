/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 12:50:24 by cpoulain          #+#    #+#             */
/*   Updated: 2024/10/18 20:14:35 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, char const *set)
{
	char	*ans;
	size_t	trimmed_len;

	while (*s1 && ft_strchr(set, *s1))
		s1++;
	trimmed_len = ft_strlen(s1);
	while (*s1 && ft_strchr(set, s1[trimmed_len - 1]))
		trimmed_len--;
	ans = malloc(trimmed_len + 1);
	if (ans)
		ft_strlcpy(ans, s1, trimmed_len + 1);
	return (ans);
}
