/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysensoy <ysensoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 10:14:36 by ysensoy           #+#    #+#             */
/*   Updated: 2022/02/09 10:18:41 by ysensoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		s;
	int		d;

	s = 0;
	d = 1;
	while (*str == ' ' || *str == '\t' || *str == '\n'
		|| *str == '\f' || *str == '\v' || *str == '\r')
		str++;
	if (*str == '-')
	{
		d *= -1;
		str++;
	}
	else if (*str == '+')
		str++;
	if (*str == '+' || *str == '-')
		return (0);
	while (*str >= '0' && *str <= '9')
	{
		s = (s * 10) + (*str - 48);
		str++;
	}
	return (s * d);
}
/*
int	main()
{
	char	yasin[] = " +21474836";
	printf("%d\n",ft_atoi(yasin));
	printf("%d",atoi(yasin));
}*/
