#include <string.h>

void	*memset(void *ptr, int value, size_t num)
{
	unsigned char *uch;
	size_t	idx;

	uch = (unsigned char)ptr;
	idx = 0;
	while (idx < num)
	{
		uch[idx] = value;
		idx++;
	}
	return (ptr);
}
