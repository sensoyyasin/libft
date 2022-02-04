/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysensoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 11:04:13 by ysensoy           #+#    #+#             */
/*   Updated: 2022/02/04 20:08:42 by ysensoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int		i;
	char	*s1;
	char	*s2;

	i = 0;
	s1 = (char *)dst;
	s2 = (char *)src;
	ft_memcpy(dst,src,len);
	return (s1);
}

/*int	main()
{
	const	char src[50] = "yasin";
	char dest[50] = "besiktas";
	ft_memmove(dest,src,3);
	printf("%s",ft_memmove(dest,src,3));
}*/
