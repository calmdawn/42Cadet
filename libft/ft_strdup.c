#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	int		idx;
	int		len;

	idx = 0;
	len = ft_strlen(s1);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	while (s1[idx] != '\0')
	{
		str[idx] = s1[idx];
		idx++;
	}
	str[idx] = '\0';
	return (str);
}
