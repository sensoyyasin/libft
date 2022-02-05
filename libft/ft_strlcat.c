/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysensoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 11:23:39 by ysensoy           #+#    #+#             */
/*   Updated: 2022/02/05 12:39:42 by ysensoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	lensrc;
	size_t	lendst;
	size_t	c;
	size_t	retval;

	lensrc = 0;
	lendst = 0;
	c = 0;
	while (src[lensrc] != '\0')
		lensrc++;
	while (dst[lendst] != '\0')
		lendst++;
	if (dstsize == 0)
		return (lensrc);
	else if (dstsize < lendst)
		retval = lensrc + dstsize;
	else
		retval = lensrc + lendst;
	while (src[c] != '\0' && lendst < (dstsize -1))
	{
		dst[lendst + c] = src[c];
		c++;
	}
	dst[lendst + c] = '\0';
	return (retval);
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
