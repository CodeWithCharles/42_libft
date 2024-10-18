/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 15:59:27 by cpoulain          #+#    #+#             */
/*   Updated: 2024/10/18 16:05:07 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		size;
	t_list	**list_ptr;

	list_ptr = &lst;
	size = 0;
	while (*list_ptr)
	{
		size++;
		list_ptr = &(*list_ptr)->next;
	}
	return (size);
}
