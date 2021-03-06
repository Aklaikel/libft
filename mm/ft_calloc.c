/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <aklaikel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 11:34:43 by aklaikel          #+#    #+#             */
/*   Updated: 2021/11/17 17:50:13 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*temp;

	temp = (void *)malloc(count * size);
	if (!temp)
		return (NULL);
	ft_bzero(temp, size * count);
	return (temp);
}
