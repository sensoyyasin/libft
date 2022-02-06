/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysensoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 11:32:29 by ysensoy           #+#    #+#             */
/*   Updated: 2022/02/06 18:28:59 by ysensoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*t;

	i = 0;
	t = (char *)s;
	while (t[i] != '\0')
		i++;
	while (t[i] != c)
		i--;
	return (&t[i]);
}
/*
int	main()
{
	char dizi[] = "yiasin";
	printf("%s",(ft_strrchr(dizi,'s')));
}*/
