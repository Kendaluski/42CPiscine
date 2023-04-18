/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaen-mo <jjaen-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 10:20:21 by jjaen-mo          #+#    #+#             */
/*   Updated: 2023/03/14 20:11:28 by jjaen-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_numbers(int n1, int n2, int n3)
{
	write(1, &n1, 1);
	write(1, &n2, 1);
	write(1, &n3, 1);
	if (!(n1 == 55 && n2 == 56 && n3 == 57))
	{
		write(1, ", ", 2);
	}
	else
	{
		write(1, "\n", 1);
	}
}

void	ft_print_comb(void)
{
	int	cent;
	int	dec;
	int	unds;

	cent = 48;
	while (cent < 56)
	{
		dec = cent + 1;
		while (dec < 57)
		{
			unds = dec + 1;
			while (unds < 58)
			{
				print_numbers(cent, dec, unds);
				unds++;
			}
			dec++;
		}
		cent++;
	}
}
