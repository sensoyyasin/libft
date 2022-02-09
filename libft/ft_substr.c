/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysensoy <ysensoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 10:17:58 by ysensoy           #+#    #+#             */
/*   Updated: 2022/02/09 10:18:12 by ysensoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;
	char	*src;

	i = 0;
	src = (char *)s;
	str = (char *)malloc(sizeof(char) * len);
	while (i < len)
	{
		str[i] = src[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}
/*
int	main()
{
	char	yasin[] = "yasintemp";
	printf("%s",ft_substr(yasin,3,4));
}*/
