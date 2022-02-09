/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysensoy <ysensoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 10:16:26 by ysensoy           #+#    #+#             */
/*   Updated: 2022/02/09 10:18:27 by ysensoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <fcntl.h>
void	ft_putnbr_fd(int n, int fd)
{
	int		i;
	char	*c;

	i = 0;
	c = ft_itoa(n);
	if (c)
	{
		while (c[i] != '\0')
		{
			write(fd, &c[i], 1);
			i++;
		}
	}
}
/*
int	main()
{
	int	i = open ("my.txt",O_WRONLY);
	printf("%d",i);
	ft_putnbr_fd(125,i);
}*/
