/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysensoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 16:38:46 by ysensoy           #+#    #+#             */
/*   Updated: 2022/02/04 20:05:07 by ysensoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t	i;
	size_t	eksi;
	int		sonuc;
	char	*s;

	i = 0;
	eksi = 1;
	sonuc = 0;
	s = (char *)str;
	while (s[i] <= 32)
		i++;
	if (s[i] == '-')
	{
		eksi *= -1;
		i++;
	}
	else if (s[i] == '+')
		i++;
	while (s[i] <= '9' && s[i] >= '0')
	{
			sonuc *= 10;
			sonuc += str[i] - '0';
			i++;
	}
	return (sonuc * eksi);
}
/*int	main()
{
	char	yasin[] = "      +30yasin";
	printf("%d\n",ft_atoi(yasin));
	printf("%d",atoi(yasin));
}*/
