#include "libft.h"

int	ft_strncmp(const char	*s1, const char	*s2, size_t n)
{
	char	*k1;
	char	*k2;
	size_t	i;

	i = 0;
	k1 = (char *)s1;
	k2 = (char *)s2;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
		i++;
	if (n <= i)
		return (0);
	else
		return (s1[i] - s2[i]);
}
