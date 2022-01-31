#include <unistd.h>

int	sonucver(int i, int e, char *str)
{
	int	a;
	int	sonuc;

	a = 0;
	sonuc = 0;
	while (str[i + e + a] != '\0')
	{
		if (str[i + e + a] <= '9' && str[i + e + a] >= '0')
		{
			sonuc *= 10;
			sonuc += str[i + e + a] - '0';
		}
		else
			break;
		a++;
	}
	return (sonuc);
}
int	ft_atoi(char *str)
{
	int	c;
	int	e;
	int	i;
	int	sonuc;

	c = 0;
	e = 0;
	i = 0;
	sonuc = 0;
	while (str[i] <= 32)
		i++;
	while (str[i + e] == '-' || str[i + e] == '+')
	{
		if (str[i + e] == '-')
			c++;
		e++;
	}
	c = c % 2;
	if (c == 1)
		c = -1;
	else
		c = 1;
	sonuc = sonucver(i, e, str);
	return (sonuc * c);
}
#include <stdio.h>
int	main(void);
{
	char	str1[] = "        +++--a-123";
	int	val = ft_atoi(str1);
	printf("%d",val);
	return (0);
}
