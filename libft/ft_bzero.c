/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysensoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:07:47 by ysensoy           #+#    #+#             */
/*   Updated: 2022/01/31 16:59:47 by ysensoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>
#include <strings.h>

void	*ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
	return (str);
}

#include <stdio.h>
int	main()
{
	char dizi[] = "yasintemp";
	printf("%s",ft_bzero(dizi,5));
	//printf("%s",bzero(dizi,5));
}
