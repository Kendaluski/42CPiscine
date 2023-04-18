/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaen-mo <jjaen-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 23:37:21 by jjaen-mo          #+#    #+#             */
/*   Updated: 2023/03/29 18:58:30 by jjaen-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	long	cnt;

	cnt = 1;
	if (nb <= 0)
		return (0);
	while (nb > cnt * cnt)
		cnt++;
	if (nb == cnt * cnt)
		return (cnt);
	return (0);
}

// int main()
// {
//     printf("%i",ft_sqrt(4));
// }