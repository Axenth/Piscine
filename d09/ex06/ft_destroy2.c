/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_destroy2.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jlensing <jlensing@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/16 08:41:10 by jlensing       #+#    #+#                */
/*   Updated: 2019/08/16 10:19:55 by jlensing      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_ultimator.h"

void    ft_destroy(char ***factory)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (factory[i])
    {
        while(factory[i][j])
        {
            free(factory[i][j]);
            j++;
        }
        free(factory[i]);
        j= 0;
        i++;
    }
    free(factory);
}
