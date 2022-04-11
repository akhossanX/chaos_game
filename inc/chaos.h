#ifndef __CHAOS_H__
#define __CHAOS_H__

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/errno.h>

#include <mlx.h>

#define WIN_WIDTH	700
#define	WIN_HEIGTH	500
#define WIN_TITLE	"CHAOS EQUATION SIMULATION"
#define NUM_POINTS	5

extern int		*POINTS[];

typedef struct	s_chaos
{
	void	*mlx_ptr;
	void	*win_ptr;
	int		err;
}				t_chaos;



/*
**	Functions definitions
*/

t_chaos	*chaos_init(void);


/*
**	End of functions definitions
*/



#endif
