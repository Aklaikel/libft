/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 00:29:06 by aklaikel          #+#    #+#             */
/*   Updated: 2021/11/11 11:37:16 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

static int	ft_finder(char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const	*s1, char const	*set)
{
	size_t	i;
	size_t	start;
	size_t	end;
	char	*middle;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen((char *)s1);
	while (s1[start] && ft_finder(s1[start], set))
		start++;
	while (start < end && ft_finder(s1[end - 1], set))
		end--;
	i = 0;
	middle = (char *)malloc(sizeof(char ) * (end - start  + 1));
	if (!middle)
		return (NULL);
	while (start < end)
		middle[i++] = s1[start++];
	middle[i] = '\0';
	return (middle);
}
