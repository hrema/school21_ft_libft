#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_string;
	int		i;
	int		length;

	if (!s || !f)
		return (NULL);
	length = ft_strlen(s);
	i = 0;
	if (!(new_string = (char *)malloc(sizeof(char) * (length + 1))))
		return (NULL);
	while (s[i] != '\0')
	{
		new_string[i] = f(i, s[i]);
		i++;
	}
	new_string[i] = '\0';
	return (new_string);
}
