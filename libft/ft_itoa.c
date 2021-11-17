/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <aklaikel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 11:07:53 by aklaikel          #+#    #+#             */
/*   Updated: 2021/11/17 17:50:54 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_size(long long n)
{
	size_t	i;

	i = 0;
	if (n < 0)
		n *= -1;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	size_t	i;
	long	nb;
	size_t	len;
	char	*str;

	nb = (long)n;
	len = count_size(nb);
	i = 0;
	if (nb < 0 || len == 0)
		len++;
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (nb < 0)
	{
		nb *= -1;
		str[i++] = '-';
	}
	while (len-- > i)
	{
		str[len] = (nb % 10) + 48;
		nb /= 10;
	}
	return (str);
}
