// #include "../mlx_opengl/mlx.h"
// #include "../mlx_mms_20210621/mlx.h"
#include "../mlx_linux/mlx.h"

int		main(void)
{
	void	*mlx;
	void	*win;

	mlx = mlx_init();
	win = mlx_new_window(mlx, 500, 500, "mlx_project");
	mlx_loop(mlx);
}
