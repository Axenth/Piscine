/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   binary_search.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-der <nvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/28 13:33:27 by nvan-der       #+#    #+#                */
/*   Updated: 2019/08/28 13:43:15 by jlensing      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

binary_search(int *arr, int l, int r, int x)
{
	int		m;

	while (l <= r)
	{
		m = l + (r - 1) / 2;
		if (arr[m] == x)
			return m;
		if (arr[m] < x)
			l = m + 1;
		else
		r = m - 1;
	}
	return (-1);
}
