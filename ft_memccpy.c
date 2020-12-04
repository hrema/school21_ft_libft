#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char		*ptr_dest;
	const unsigned char	*ptr_src;
	unsigned char		sym;

	ptr_dest = (unsigned char *)dest;
	ptr_src = (unsigned char *)src;
	sym = (unsigned char)c;
	while (n--)
	{
		if (*ptr_src == sym)
		{
			*ptr_dest++ = *ptr_src++;
			return (void *)(ptr_dest);
		}
		*ptr_dest++ = *ptr_src++;
	}
	return (void *)(NULL);
}
