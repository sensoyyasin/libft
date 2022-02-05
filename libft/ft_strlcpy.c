/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysensoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 11:28:01 by ysensoy           #+#    #+#             */
/*   Updated: 2022/02/05 11:28:02 by ysensoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	a;
	size_t	b;
	char	*s;

	a = 0;
	b = 0;
	s = (char *)src;
	while (s[a] != '\0')
		a++;
	if (dstsize != 0)
	{
		while (s[b] != '\0' && b < dstsize - 1)
		{
			dst[b] = s[b];
			b++;
		}
		dst[b] = '\0';
	}
	return (a);
}
/*
#include <stdio.h>
#include <string.h>

int	main()
{
	char dizi1[] = "yasintemp";
	char dizi2[50] = "mehmet";

	ft_strlcpy(dizi1,dizi2, 5);
	printf("%s\n", dizi1);
	printf("%zu\n", ft_strlcpy(dizi1,dizi2,3));
	printf("%lu", strlcpy(dizi1,dizi2,3));
}
*/
