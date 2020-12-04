#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char *ptr;

	if (!(ptr = (unsigned char *)malloc(nmemb * size)))
		return (NULL);
	ft_memset(ptr, 0, nmemb * size);
	return (void *)(ptr);
}
