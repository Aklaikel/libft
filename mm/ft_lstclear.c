/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <aklaikel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 23:55:33 by aklaikel          #+#    #+#             */
/*   Updated: 2021/11/18 21:26:08 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*rem;

	if (!(*lst))
		return ;
	while (*lst)
	{
		rem = *lst;
		*lst = (*lst)->next;
		ft_lstdelone(rem, del);
	}
	free (*lst);
}
