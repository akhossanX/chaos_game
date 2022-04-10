
#include "chaos.h"

int	main(int ac, char **av)
{
	(void)ac, (void)av;
	void *ptr = mlx_init();
	free(ptr);
	return (0);
}
