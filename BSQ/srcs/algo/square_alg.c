/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   square_alg.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-der <nvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/27 15:59:37 by nvan-der       #+#    #+#                */
/*   Updated: 2019/08/28 09:52:44 by jlensing      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "basic_functions.h"
#include "general.h"
#include "read_write_obstacle_file.h"
#include "test_functions.h"

void		alg_square(char **map, int size, int x,  int y)
{
	int boxx;
	int boxy;
	int flag;
	static int i;

	boxx = 0;
	boxy = 0;
	flag = 0;
	i = 0;
    while(map[(boxy + y)][0] != '\0' && i <= size)
    {
        while((boxy + y) <= (y + size - 1) && i <= size)
        {;
            i++;
            while((boxx + x) <= (x + size - 1))
            {   
                if(map[(boxy + y)][(boxx + x)] == '.')
                {
                    flag++;
                }
                if(flag == (size * size))
                {
                    printf("GREAT SUCCESS! %i\n", size);
					size++;
                    alg_square(map, size, x, y);
                    break;
                }
                if(map[(boxy + y)][(boxx + x)] == 'o')
                {
                    printf("object boxy: %i boxx: %i \n", (boxy + y), (boxx + x));
                    boxx++;
                    alg_square(map, size, (boxx + x), y);
                    break;
                }
				printf("%i %i %i %i\n", boxy, y, boxx, x);
                if(map[(boxy + y)][(boxx + x + 1)] == '\0' && map[(y + size)][0] != '\0')
                {
                    y++;
                    alg_square(map, size, 0 , y);
                    break;
                }
                boxx++;
            }
            boxx = 0;
            boxy++;
        }
    }
}
