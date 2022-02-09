/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysensoy <ysensoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 10:16:37 by ysensoy           #+#    #+#             */
/*   Updated: 2022/02/09 10:18:25 by ysensoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	int		a;
	char	*str;

	i = 0;
	a = 0;
	str = (char *)s;
	while (s[i] != c && s[i] != '\0')
		i++;
	if (s[i] == '\0')
		str[a] = s[i];
	while (s[i] != '\0')
		str[a++] = s[i++];
	str[a] = '\0';
	return (str);
}
/*
int	main()
{
	char dizi[] = "yasintemp";
	printf("%s",ft_strchr(dizi,'i'));
}*/
