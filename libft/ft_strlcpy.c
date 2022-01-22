#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t len;
	size_t idx;

	idx = 0;
	len = ft_strlen(src);
	if (dstsize == 0)
		return (len);
	while (idx < dstsize - 1)
	{
		if (src[idx] == '\0')
			break ;
		dst[idx] = src[idx];
		idx++;
	}
	if (dstsize > 0)
		dst[idx] = '\0';
	return (len);
}
