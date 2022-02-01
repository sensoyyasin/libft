#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;
	int	a;
	char	*str;

	i = 0;
	a = 0;
	str = (char *)s;
	while (s[i] != c && s[i] != '\0')
		i++;
	if (s[i] == '\0')
		str[a] = s[i];
	while (s[i] != '\0')
	{
		str[a++] = s[i++];
	}
	str[a] = '\0';
	return (str);
}

int	main()
{
	char dizi[] = "yasintemp";
	ft_putstr(ft_strchr(dizi,'x'));
}
