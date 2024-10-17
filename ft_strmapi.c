/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 16:13:49 by cpoulain          #+#    #+#             */
/*   Updated: 2024/10/17 16:36:04 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char			*ans;
	unsigned int	i;

	i = ft_strlen(s);
	ans = malloc(i + 1);
	if (ans)
	{
		ans[i] = '\0';
		while (i--)
			ans[i] = f(i, *(s + i));
	}
	return (ans);
}
