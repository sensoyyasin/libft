/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysensoy <ysensoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 10:16:32 by ysensoy           #+#    #+#             */
/*   Updated: 2022/02/09 10:18:26 by ysensoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
}
/*
int	main()
{
int	i = open("my.txt",O_WRONLY);
int	c = open("taha.txt",O_WRONLY);
printf("%d",i);
printf("\n%d",c);
ft_putstr_fd("yasin",i);
ft_putstr_fd("malintemp",c);
}*/
