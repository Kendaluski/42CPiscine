/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaen-mo <jjaen-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 02:45:42 by jjaen-mo          #+#    #+#             */
/*   Updated: 2023/03/29 18:59:25 by jjaen-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	cnt;

	if (nb <= 1)
		return (0);
	cnt = 2;
	while (cnt <= nb / cnt)
	{
		if (nb % cnt == 0)
			return (0);
		cnt++;
	}
	return (1);
}

// #include <stdio.h>
// int main()
// {
//     printf("%i",ft_is_prime(7));
// }