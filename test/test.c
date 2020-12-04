#include <stdio.h>
#include <stdlib.h>
#include "../libft.h"
#include <limits.h>

int	main(void)
{
	long int	i = 9223372036854775807;
	char		*num_str = "   -922337203  6854775810";

	printf("my atoi = %d\tstd atoi = %d\n", ft_atoi(NULL), atoi(num_str));
	return (1);
}