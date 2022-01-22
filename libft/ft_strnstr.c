#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;

	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[i] != "\0" && i < len)
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			while (haystack[i + j] != '\0' && haystack[i + j] == needle[j] && (i + j < len))
			{
				if(needle[j] == '\0')
					return ((char *)haystack[i]);
				j++;
			}
			
		}
		i++;
	}
	return (0);
}
