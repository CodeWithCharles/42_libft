/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 16:25:58 by cpoulain          #+#    #+#             */
/*   Updated: 2024/10/18 18:55:01 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	_ft_lstclear(t_list *lst, void (*del)(void *));

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	_ft_lstclear(*lst, del);
	*lst = NULL;
}

static void	_ft_lstclear(t_list *lst, void (*del)(void *))
{
	if (lst == NULL)
		return ;
	_ft_lstclear(lst->next, del);
	ft_lstdelone(lst, del);
}
