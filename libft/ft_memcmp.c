#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char *cpy1;
	unsigned const char *cpy2;
	size_t	idx;

	cpy1 = s1;
	cpy2 = s2;
	idx = 0;
	while (idx < n)
	{
		if(cpy1[idx] != cpy2[idx])
			return (cpy1[idx] - cpy2[idx]);
		idx++;
	}
	return (0);
}
