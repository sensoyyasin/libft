//#include "libft.h"
#include <stdio.h>
#include <string.h>

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
	else
		return (&str[i-1]);
}

int	main()
{
	char cp[] = "bilgisayar";
	char cd = 'g';
	printf("%c karakterin bellek adresi %p\n", cd, ft_memchr(cp, cd, 1));
	printf("%c karakterin bellek adresi %p\n", cd, memchr(cp, cd, 1));
	return 0;
}
