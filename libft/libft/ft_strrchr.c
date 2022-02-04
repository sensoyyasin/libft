#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	a;
	char	*t;

	i = 0;
	a = 0;
	t = (char *)s;
	while (s[i] != '\0')
		i++;
	i--;
	while (s[i] != c && i >= 0)
		i--;
	while (s[i] != '\0')
	{
		t[a++] = s[i++];
	}
	t[a] = '\0';
	return (t);
}
/*
int	main()
{
	char dizi[] = "yiasin";
	ft_putstr(ft_strrchr(dizi,'n'));
}*/
