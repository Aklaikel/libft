/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <aklaikel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 22:48:03 by aklaikel          #+#    #+#             */
/*   Updated: 2021/11/17 17:52:25 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*api;

	i = 0;
	if (!s)
		return (0);
	else if (!f)
		return (ft_strdup(s));
	api = malloc(ft_strlen(s) + 1);
	if (!api)
		return (NULL);
	while (s[i] != '\0')
	{
		api[i] = f(i, s[i]);
		i++;
	}
	api[i] = '\0';
	return (api);
}
/*
char enc(unsigned int i , char c)
{
	return (c + i);
}
char decr(unsigned int i, char c)
{
	return (c - i);
}
int main(void)
{
	char x[] = "hbolh%g~jl%";
	char *s = ft_strmapi(x, enc);
	printf("%s\n%s", x, s);
}
*/