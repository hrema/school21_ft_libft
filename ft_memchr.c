#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr_s;
	unsigned char		sym;

	ptr_s = (unsigned char *)s;
	sym = (unsigned char)c;
	while (n--)
	{
		if (*ptr_s == sym)
			return (void *)(ptr_s);
		ptr_s++;
	}
	return (void *)(NULL);
}
