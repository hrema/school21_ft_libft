#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	const char *ptr_src;

	if (!src)
		return (0);
	ptr_src = src;
	while (*ptr_src != '\0')
	{
		if (size > 1 && dest)
		{
			*dest++ = *ptr_src;
			size--;
		}
		ptr_src++;
	}
	if (size)
		*dest = '\0';
	return (ptr_src - src);
}
