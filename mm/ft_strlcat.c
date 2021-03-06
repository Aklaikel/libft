/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <aklaikel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:27:25 by aklaikel          #+#    #+#             */
/*   Updated: 2021/11/18 14:05:56 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char	*dst, const char	*src, size_t	size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	j = ft_strlen(src);
	k = ft_strlen(dst);
	if (size <= k)
		return (j + size);
	else
		j = j + k;
	while ((src[i] != '\0') && (k + 1 < size))
	{
		dst[k] = src[i];
		i++;
		k++;
	}
	dst[k] = '\0';
	return (j);
}
