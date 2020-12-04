#include "libft.h"

char	*ft_strnstr(const char *b, const char *l, size_t len)
{
	size_t	len_l;

	len_l = ft_strlen(l);
	if (*l == '\0')
		return (char *)(b);
	if (!l)
		return ((char *)(b));
	while (len_l <= len && *b != '\0' && b)
	{
		if (*b == *l && ft_strncmp(b, l, len_l) == 0)
			return (char *)(b);
		b++;
		len--;
	}
	return (NULL);
}
