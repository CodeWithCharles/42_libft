/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 13:18:56 by cpoulain          #+#    #+#             */
/*   Updated: 2024/10/17 14:38:30 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Static declarations */

static size_t		count_strings(const char *s, char c);
static void			free_strs(char ***strs, size_t len);
static const char	*cpy_until_c(char **strs, const char *s, char c);

/* ft_split */

char	**ft_split(const char *s, char c)
{
	char	**strs;
	size_t	string_count;
	size_t	current_idx;

	string_count = count_strings(s, c);
	strs = malloc((sizeof(char *) * (string_count + 1)));
	if (strs)
	{
		strs[string_count] = NULL;
		current_idx = 0;
		while (current_idx < string_count)
		{
			s = cpy_until_c(strs + current_idx++, s, c);
			if (!s)
				return (free_strs(&strs, current_idx), NULL);
		}
	}
	return (strs);
}

/* Static definitions */

static const char	*cpy_until_c(char **dst, const char *s, char c)
{
	size_t	len;

	while (*s && *s == c)
		s++;
	len = 0;
	while (s[len] && s[len] != c)
		len++;
	*dst = malloc(sizeof(char) * (len + 1));
	if (*dst == NULL)
		return (NULL);
	return (ft_strlcpy(*dst, s, len + 1), s += len + 1, s);
}

static size_t	count_strings(const char *s, char c)
{
	size_t	string_count;

	string_count = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			while (*s && *s != c)
				s++;
			string_count++;
		}
	}
	return (string_count);
}

static void	free_strs(char ***strs, size_t len)
{
	while (len)
		free((*strs)[(len-- - 1)]);
	free(*strs);
}
