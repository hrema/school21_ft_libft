#include "libft.h"

int		ft_tolower(int c)
{
	c = (unsigned char)c;
	if (c >= 65 && c <= 90)
		return (int)(c + 32);
	return (int)(c);
}
