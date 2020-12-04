#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	const char	*ptr_s1;
	const char	*ptr_s2;
	char		*new_line;
	int			len_new_line;

	if (!s1 || !s2)
		return (NULL);
	ptr_s1 = s1;
	ptr_s2 = s2;
	len_new_line = ft_strlen(s1) + ft_strlen(s2);
	if (!(new_line = (char *)malloc(sizeof(char) * (len_new_line + 1))))
		return (NULL);
	len_new_line = 0;
	while (*ptr_s1 != '\0')
		new_line[len_new_line++] = *ptr_s1++;
	while (*ptr_s2 != '\0')
		new_line[len_new_line++] = *ptr_s2++;
	new_line[len_new_line] = '\0';
	return (new_line);
}
