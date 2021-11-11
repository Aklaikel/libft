/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memeset.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 09:39:50 by aklaikel          #+#    #+#             */
/*   Updated: 2021/11/10 15:53:18 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	k;
	char			*str;

	k = c;
	str = b;
	while (len-- > 0)
	{
		*str = k;
		str++;
	}
	return (b);
}
