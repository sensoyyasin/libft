/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysensoy <ysensoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 10:14:31 by ysensoy           #+#    #+#             */
/*   Updated: 2022/02/09 10:18:28 by ysensoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <fcntl.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int	main(void)
{
	int	i = open("my.txt",O_WRONLY);
	int	c = open("taha.txt",O_WRONLY);
	printf("%d",i);
	printf("\n%d",c);
	ft_putchar_fd('a',i);
	ft_putchar_fd('y',c);
}*/
