/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 11:00:43 by cpoulain          #+#    #+#             */
/*   Updated: 2024/10/17 11:18:46 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*ans;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	ans = malloc(s1_len + s2_len + 1);
	if (ans)
	{
		ft_memcpy(ans, s1, s1_len);
		ft_memcpy(ans + s1_len, s2, s2_len);
		ans[s1_len + s2_len] = '\0';
	}
	return (ans);
}
