/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysensoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 11:29:53 by ysensoy           #+#    #+#             */
/*   Updated: 2022/02/05 12:22:16 by ysensoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char	*s1, const char	*s2, size_t n)
{
	char	*k1;
	char	*k2;
	size_t	i;

	i = 0;
	k1 = (char *)s1;
	k2 = (char *)s2;
	while ((s1[i] != '\0' || s2[i] != '\0') && n < i)
	{
		if (s1[i] < 32 && s2[i] < 32)
			return (s2[i] - s1[i]);
		else if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/*#include <string.h>
int	main()
{
	printf("%d\n",ft_strncmp("test\200", "test\0", 6));
	printf("%d",strncmp("test\200", "test\0", 6));
}*/
