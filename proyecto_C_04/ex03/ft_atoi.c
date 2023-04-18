/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaen-mo <jjaen-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 16:41:29 by jjaen-mo          #+#    #+#             */
/*   Updated: 2023/03/28 23:27:43 by jjaen-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	cnt;
	int	nbh;
	int	nb;
	int	sign;

	sign = 1;
	nbh = 0;
	cnt = 0;
	nb = 0;
	while ((str[cnt] >= 9 && str[cnt] <= 13) || str[cnt] == 32)
		cnt++;
	while ((str[cnt] == '-' || str[cnt] == '+') && str[cnt] != '\0')
	{
		if (str[cnt] == '-')
			nbh++;
		cnt++;
	}
	while ((str[cnt] >= 48 && str[cnt] <= 57) && str[cnt] != '\0')
	{
		nb = nb * 10 + str[cnt] - 48;
		cnt++;
	}
	if (nbh % 2 != 0)
		sign = -1;
	return (sign * nb);
}

// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	int num;
// 	char str[] = "-- -123 -4";
// 	num = ft_atoi(str);
// 	printf("%i", num);
// 	printf("\n%i", atoi(str));
// }