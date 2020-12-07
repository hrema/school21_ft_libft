#include <stdio.h>
#include <stdlib.h>
#include "../libft.h"
#include <limits.h>
#include <string.h>

int	main(void)
{
	long int	i = 9223372036854775807;
	char		*num_str = "   -922337203  6854775810";

	printf("%d\t%d\n", ft_isalpha('C'), isalpha('C'));
}