/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 16:05:50 by cpoulain          #+#    #+#             */
/*   Updated: 2024/10/18 16:09:21 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	**lst_ptr;

	lst_ptr = &lst;
	while ((*lst_ptr)->next)
	{
		lst_ptr = &(*lst_ptr)->next;
	}
	return (*lst_ptr);
}
