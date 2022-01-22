#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned const char *ptr;
	size_t idx;

	ptr = s;
	idx = 0;
	while (idx < n)
	{
		if(ptr[idx] == c)
			return (void *)(ptr[idx]);
		idx++;
	}
	return (0);
}
