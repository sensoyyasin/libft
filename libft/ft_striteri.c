/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysensoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 10:42:09 by ysensoy           #+#    #+#             */
/*   Updated: 2022/02/08 11:15:04 by ysensoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int		i;

	i = 0;
	while (s[i] != '\0')
	{
		(*f)(i, &s[i]);
		i++;
	}
}
/*
void	ft_upper(unsigned int i, char *s)
{
	int	c;

	c = 0;
	i = 0;
	if (*s)
	{
		s[c] = s[c] - 32;
	}
}

int	main ()
{
	char yasintemp[] = "yasintemp";
	ft_striteri(yasintemp,ft_upper);
	printf("%s",yasintemp);
}*/
