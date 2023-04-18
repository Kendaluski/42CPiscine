/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaen-mo <jjaen-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 19:44:03 by jjaen-mo          #+#    #+#             */
/*   Updated: 2023/03/30 11:47:20 by jjaen-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (nb == 0 || power == 0)
		return (1);
	return (ft_recursive_power(nb, power - 1) * nb);
}

// #include <stdio.h>
// int main()
// {
//     printf("%i",ft_recursive_power(5,2));
// }