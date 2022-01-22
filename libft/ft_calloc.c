#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*memory;

	memory = malloc(count * size);
	if (memory == NULL)
		return (NULL);
	ft_bzero(memory, count * size);
	return (memory);
}
