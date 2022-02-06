/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysensoy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 17:36:37 by ysensoy           #+#    #+#             */
/*   Updated: 2022/02/06 17:36:57 by ysensoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_checkset(char c, char const *set)
{
	size_t	index;

	index = 0;
	while (set[index])
	{
		if (set[index] == c)
			return (1);
		index++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	index;
	size_t	start;
	size_t	end;

	start = 0;
	if (!s1 || !set)
		return (NULL);
	end = ft_strlen(s1);
	while (s1[start] && ft_checkset(s1[start], set))
		start++;
	while (end > start && ft_checkset(s1[end - 1], set))
		end--;
	str = (char *)malloc(sizeof (char) * (end - start) + 1);
	if (!str)
		return (NULL);
	index = 0;
	while (start < end)
	{
		str[index] = s1[start];
		start++;
		index++;
	}
	str[index] = '\0';
	return (str);
}
/*
int	main()
{
	char	yasin[] = "yesyasinyes";
	char	mete[] = "yes";
	printf("%s",ft_strtrim(yasin,mete));
}*/
