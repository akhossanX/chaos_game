#ifndef __CHAOS_H__
#define __CHAOS_H__

#include <stdlib.h>
#include <unistd.h>
#include <errno.h>

#include <mlx.h>

typedef struct	s_chaos
{
	void	*mlx_ptr;
	void	*mlx_win;
	int		err;
}				t_chaos;

#endif
