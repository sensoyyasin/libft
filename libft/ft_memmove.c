/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysensoy <ysensoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 10:15:55 by ysensoy           #+#    #+#             */
/*   Updated: 2022/02/12 17:53:38 by ysensoy          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if ((char *)src > (char *)dst)
	{
		while (i < len)
		{
			((char *)dst)[i] = ((char *)src)[i];
			i++;
		}
	}
	i = len;
	i--;
	if ((char *)src < (char *)dst)
	{
		while (len--)
		{
			((char *)dst)[i] = ((char *)src)[i];
			i--;
		}
	}
	return ((char *)dst);
}
/*
int	main()
{
	char dest[50] = "fenerbahce";
	//ft_memmove(dest + 4,dest ,4);
	printf("%s",ft_memmove(dest + 1, dest + 3, 4));
}*/
