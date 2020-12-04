#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*duplicat;
	int		size;

	size = 0;
	while (s[size] != '\0')
		size++;
	if (!(duplicat = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	size = 0;
	while (s[size] != '\0')
	{
		duplicat[size] = s[size];
		size++;
	}
	duplicat[size] = '\0';
	return (duplicat);
}
