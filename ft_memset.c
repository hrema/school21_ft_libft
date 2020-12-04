#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char *ptr;
	unsigned char sym;

	ptr = (unsigned char *)s;
	sym = (unsigned char)c;
	while (n--)
		*ptr++ = sym;
	return (void *)(s);
}
