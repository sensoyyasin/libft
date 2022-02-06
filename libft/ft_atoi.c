/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysensoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 16:38:46 by ysensoy           #+#    #+#             */
/*   Updated: 2022/02/06 15:50:31 by ysensoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	int		res;
	int		pos;
	char	*s;

	pos = 1;
	i = 0;
	res = 0;
	s = (char *)str;
	while (s[i] == ' ' || (s[i] > 8 && s[i] < 14))
		i++;
	if (s[i] == '+' || s[i] == '-')
		pos = 1 - 2 * (s[i++] == '-');
	while (s[i] >= '0' && s[i] <= '9')
	{
		if (res > 2147483647 / 10 || (res == 2147483647 / 10
				&& s[i] - '0' > 7 && pos != -1))
		{
			if (pos == 1)
				return (-1);
			return (0);
		}
		res = res * 10 +(s[i++] - 48);
	}
	return (res * pos);
}

/*int	main()
{
	char	yasin[] = "  \e475";
	printf("%d\n",ft_atoi(yasin));
	printf("%d",atoi(yasin));
}*/
