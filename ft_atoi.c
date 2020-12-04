#include "libft.h"

static char	*split(const char *nptr, int *sign)
{
	while (*nptr == 32 || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == '-')
	{
		*sign = -1;
		nptr++;
	}
	else if (*nptr == '+')
		nptr++;
	return (char *)(nptr);
}

int			ft_atoi(const char *nptr)
{
	int					sign;
	unsigned long long	number;
	char				*ptr;

	number = 0;
	sign = 1;
	ptr = split(nptr, &sign);
	while (*ptr >= '0' && *ptr <= '9')
	{
		number = number * 10 + (*ptr++ - '0');
		if (number > 9223372036854775807 && sign == -1)
			return (0);
		if (number > 9223372036854775807 && sign == 1)
			return (-1);
	}
	return (number * sign);
}
