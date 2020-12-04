#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const unsigned char	*ptr_s1;
	const unsigned char	*ptr_s2;

	ptr_s1 = (unsigned char *)s1;
	ptr_s2 = (unsigned char *)s2;
	while (*ptr_s1 == *ptr_s2 && n-- > 0 && *ptr_s1 != '\0' &&
			*ptr_s2 != '\0')
	{
		ptr_s1++;
		ptr_s2++;
	}
	if (n == 0)
		return (0);
	else
		return (int)(*ptr_s1 - *ptr_s2);
}
