/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysensoy <ysensoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 10:17:28 by ysensoy           #+#    #+#             */
/*   Updated: 2022/02/09 10:18:17 by ysensoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*str;
	int		len;

	i = 0;
	len = ft_strlen(s);
	if (!s || !f)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (len + 1));
	while (s[i] != '\0')
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
char	ft_printf(unsigned int i,char c)
{
	c = c - 32;
	return (c);
}

int	main()
{
	char y[] = "yasin";
	printf("%s",ft_strmapi(y, &ft_printf));
}*/
