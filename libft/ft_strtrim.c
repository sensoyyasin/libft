#include "libft.h"

char	*ft_strtrim(char *const *s1, char const *set)
{
	int		i;
	int		a;
	char	*end;
	char	*src;
	char	*dest;
	char	*dizi;

	i = 0;
	a = 0;
	src = (char *)s1;
	dest = (char *)set;
	dizi = (char *)malloc(sizeof(char) * (ft_strlen(s1)));
	while (src[i] != '\0')
	{
		while (end > str)
			end--;
		i++;
	}
	if (*src == 0)
		return (src);
	return (dizi);
}
