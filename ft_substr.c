/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 10:47:21 by cpoulain          #+#    #+#             */
/*   Updated: 2024/10/17 10:59:41 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*ans;
	size_t	s_len;

	s_len = ft_strlen(s);
	if (s_len <= start)
		return (ft_strdup(""));
	s_len -= start;
	if (s_len < len)
		len = s_len;
	ans = malloc(len + 1);
	if (ans)
	{
		ans = ft_memcpy(ans, s + start, len);
		ans[len] = '\0';
	}
	return (ans);
}
