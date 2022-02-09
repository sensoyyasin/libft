/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysensoy <ysensoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 10:15:39 by ysensoy           #+#    #+#             */
/*   Updated: 2022/02/09 16:18:08 by ysensoy          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	int		k;
	char	*str;

	i = 0;
	k = 0;
	str = (char *)s;
	while (str[i] != '\0' && k == 0)
	{
		if (str[i] == c)
		{
			k = 1;
		}
		i++;
	}
	if (n < i)
		return (0);
	else if (k == 1)
		return (&str[i - 1]);
	else
		return (0);
}

/*int	main()
{
	char cp[] = "bilgisayar";
	char cd = 'g';
	printf("%c karakterin bellek adresi %p\n", cd, ft_memchr(cp, cd, 2));
	printf("%c karakterin bellek adresi %p\n", cd, memchr(cp, cd, 2));
	return 0;
}*/
