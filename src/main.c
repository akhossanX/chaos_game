#include "chaos.h"


void	set_coordinates()
{
	int	POINTS[NUM_POINTS][2] = {
		{1, 2},
		{-1, 0},
		{4, 10},
		{2, 5},
		{-7, 3},
	};
	(void)POINTS;
}

int		main(void)
{
	t_chaos	*chaos;

	chaos = chaos_init();
	set_coordinates();
	if (!chaos)
	{
		printf("chaos: %s\n", strerror(errno));
		return (errno);
	}
	mlx_loop(chaos->mlx_ptr);
	mlx_destroy_window(chaos->mlx_ptr, chaos->win_ptr);
	return (0);
}

t_chaos	*chaos_init(void)
{
	t_chaos	*ptr;

	errno = 0;
	ptr = (t_chaos *) malloc(sizeof(t_chaos));
	if (ptr)
	{
		ptr->mlx_ptr = mlx_init();
		ptr->win_ptr = mlx_new_window(ptr->mlx_ptr, WIN_WIDTH, WIN_HEIGTH, WIN_TITLE);
	}
	return (ptr);	
}
