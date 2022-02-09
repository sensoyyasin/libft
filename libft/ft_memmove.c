/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysensoy <ysensoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 10:15:55 by ysensoy           #+#    #+#             */
/*   Updated: 2022/02/09 10:18:29 by ysensoy          ###   ########.fr       */
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
/*int	main()
{
	const	char src[50] = "yasin";
	char dest[50] = "besiktas";
	ft_memmove(dest,src ,3);
	printf("%s",ft_memmove(dest,src,3));
}*/
