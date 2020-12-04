#include "libft.h"

int		ft_toupper(int c)
{
	c = (unsigned char)c;
	if (c >= 97 && c <= 122)
		return (int)(c - 32);
	return (int)(c);
}
