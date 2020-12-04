#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (fd < 0 || !s)
		return ;
	while (*s != '\0')
	{
		ft_putchar_fd((*s), fd);
		s++;
	}
	ft_putchar_fd('\n', fd);
}
