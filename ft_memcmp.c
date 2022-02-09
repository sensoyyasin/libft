/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysensoy <ysensoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 10:15:45 by ysensoy           #+#    #+#             */
/*   Updated: 2022/02/09 10:18:31 by ysensoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*ss1;
	char	*ss2;
	size_t	i;

	i = 0;
	ss1 = (char *)s1;
	ss2 = (char *)s2;
	if (n == 0)
		return (0);
	while (i < n && ss1[i] != '\0' && ss2[i] != '\0')
	{
		if (ss1[i] != ss2[i])
			return (ss1[i] - ss2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int main( void )
{
    const char *cp1 = "Bilgisayar";
    const char *cp2 = "Bilgizleri";
    int ret;

    ret = ft_memcmp(cp1, cp2, 10);

    if(ret<0) printf("cp1 bellek içeriği cp2 bellek içeriğinden küçüktür!");
    else if(ret>0) printf("cp2 bellek içeriği cp1 bellek içeriğinden küçüktür!");
    else printf("cp1 bellek içeriği cp2 bellek içeriğine eşittir!");

    return 0;
}*/
