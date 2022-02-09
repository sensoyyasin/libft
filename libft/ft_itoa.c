/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysensoy <ysensoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 10:15:32 by ysensoy           #+#    #+#             */
/*   Updated: 2022/02/09 10:18:34 by ysensoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strrev(char	*s)
{
	int		temp;
	int		len;
	int		i;
	char	*str;

	temp = 0;
	i = 0;
	str = s;
	len = ft_strlen(s) - 1;
	while (i < len)
	{
		temp = s[len];
		s[len] = str[i];
		str[i] = temp;
		len--;
		i++;
	}
	return (str);
}

static char	*ayrilacakalan(int temp)
{
	int		index;
	int		neg;
	char	*str;
	int		temp1;

	index = 0;
	neg = 0;
	temp1 = temp;
	if (temp1 < 0)
		neg = 1;
	while (temp1 != 0)
	{
		index++;
		temp1 = temp1 / 10;
	}
	str = (char *)malloc(sizeof(char) * (index + 1));
	return (str);
}

char	*ft_itoa(int n)
{
	int		i;
	int		temp;
	char	*s;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	else if (n == 0)
		return (ft_strdup("0"));
	temp = n;
	if (n < 0)
		n *= -1;
	s = ayrilacakalan(temp);
	i = 0;
	while (n != 0)
	{
		s[i] = (n % 10) + 48;
		n = n / 10;
		i++;
	}
	if (temp < 0)
		s[i] = '-';
	s = ft_strrev(s);
	return (s);
}
