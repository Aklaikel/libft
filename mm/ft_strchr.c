/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <aklaikel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 17:45:31 by aklaikel          #+#    #+#             */
/*   Updated: 2021/11/17 17:51:51 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*(char *) s)
	{
		if ((char)*s == (char) c)
			return ((char *) s);
		s++;
	}
	if (c == 0)
		return ((char *) s);
	return (NULL);
}
