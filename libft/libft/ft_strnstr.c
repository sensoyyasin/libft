#include "libft.h"

void	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*samanlik;
	char	*igne;
	size_t	i;
	size_t	a;

	i = 0;
	a = 0;
	samanlik = (char *)haystack;
	igne = (char *)needle;
	while (samanlik[i] != '\0' && i < len)
	{
		while (samanlik[i] == igne[a] || igne[a] == '\0')
		{
			if (igne[a] == '\0')
				return (&samanlik[i-a]);
			i++;
			a++;
		}
		i = i - a;
		a = 0;
		i++;
	}
	return (0);
}
/*
#include <string.h>
int	main()
{
	char	yasin[] = "taha haksal";
	char	yasin2[] = "ha ha";
	printf("%s\n", ft_strnstr(yasin,yasin2,10));
	printf("%s", strnstr(yasin,yasin2,10));
}*/