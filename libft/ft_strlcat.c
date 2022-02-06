/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysensoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 11:23:39 by ysensoy           #+#    #+#             */
/*   Updated: 2022/02/06 14:44:04 by ysensoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	a;
	size_t	de;
	size_t	sr;

	de = ft_strlen(dst);
	sr = ft_strlen((char *)src);
	a = 0;
	if (dstsize <= de)
		return (dstsize + sr);
	while (src[a] != '\0' && de + a + 1 < dstsize)
	{
		dst[de + a] = src[a];
		a++;
	}
	dst[de + a] = '\0';
	return (de + sr);
}
/*int main(void)
{
	char yasintemp[30] = "yasintemp";
	char metetemp[30] = "metecentertemp";
	printf("%lu\n", strlcat(yasintemp, metetemp, 8));
	printf("%s\n", yasintemp);
	printf("%lu\n", ft_strlcat(yasintemp, metetemp, 8));
	printf("%s\n", yasintemp);
}*/
