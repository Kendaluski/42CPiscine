/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaen-mo <jjaen-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 18:27:04 by jjaen-mo          #+#    #+#             */
/*   Updated: 2023/03/14 20:32:40 by jjaen-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	print_numbers(int a, int b, int c, int d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if (!(a == '9' && b == '8' && c == '9' && d == '9'))
	{
		write(1, ", ", 2);
	}
	d++;
	return (d);
}

void	ft_print_comb2(void)
{
	int	n1;
	int	n2;
	int	n3;
	int	n4;

	n1 = '0';
	while (n1 <= '9')
	{
		n2 = '0';
		while (n2 <= '8')
		{
			n3 = '0';
			while (n3 <= '9')
			{
				n4 = n2 + 1;
				while (n4 <= '9')
				{
					n4 = print_numbers(n1, n2, n3, n4);
				}
				n3++;
			}
			n2++;
		}
		n1++;
	}
}
