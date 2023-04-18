/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaen-mo <jjaen-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 19:33:31 by jjaen-mo          #+#    #+#             */
/*   Updated: 2023/03/30 11:46:53 by jjaen-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	cnt;
	int	res;

	res = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		cnt = 1;
		while (cnt < power)
		{
			res = res * nb;
			cnt++;
		}
	}
	return (res);
}

// int main()
// {
//     printf("%i",ft_iterative_power(4,3));
// }