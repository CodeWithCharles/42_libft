/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 19:23:04 by cpoulain          #+#    #+#             */
/*   Updated: 2024/10/14 19:32:00 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strchr(const char *s, int c)
{
	char	*temp = s;
	while(*temp)
	{
		if (*temp == c)
			return (temp);
		temp++;
	}
	return (NULL);
}
