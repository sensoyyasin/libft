#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	int	i;
	char	*str1;
	char	*str2;

	i = 0;
	str1 = (char *)src;
	str2 = (char *)dst;
	while (i < n)
	{
		str2[i] = str1[i];
		i++;
	}
	return (str2);
}

int	main()
{
	const char src[50] = "metetemp";
	char dest[50] = "yasintemp";
	ft_memcpy(dest,src,4);
	ft_putstr(dest);
}
