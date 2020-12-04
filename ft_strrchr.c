#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*ptr_s;
	const char	*ptr_ptr_s;

	ptr_s = s;
	ptr_ptr_s = s;
	c = (unsigned char)c;
	while (*ptr_s != '\0')
	{
		if (*ptr_s == c)
			ptr_ptr_s = ptr_s;
		ptr_s++;
	}
	if (*ptr_s == c)
		return (char *)(ptr_s);
	if (*ptr_ptr_s == c)
		return (char *)(ptr_ptr_s);
	return (NULL);
}
