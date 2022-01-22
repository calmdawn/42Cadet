#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dcpy;
	unsigned const char	*scpy;
	size_t	idx;

	dcpy = dst;
	scpy = src;
	idx = 0;
	if (dst == 0 && src == 0)
		return (dst);
	if ((dst == src) || n == 0)
		return (dst);
	while (idx < n)
	{
		dcpy[idx] = scpy[idx];
	}
	return (dst);
}
