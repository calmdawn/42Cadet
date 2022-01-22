#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dcpy;
	unsigned const char	*scpy;
	size_t	idx;

	dcpy = dst;
	scpy = src;
	idx = -1;

	if(dst < src)
	{
		while (++idx < len)
			dcpy[idx] = scpy[idx];
	}
	else
	{
		while (++idx < len)
					dcpy[len - idx - 1] = scpy[len - idx -1];
	}
	return (dst);
}
