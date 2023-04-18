/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaen-mo <jjaen-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 13:06:38 by jjaen-mo          #+#    #+#             */
/*   Updated: 2023/03/23 13:58:21 by jjaen-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	to_hex(int c)
{
	char	*hex_table;

	hex_table = "0123456789abcdef";
	write(1, "\\", 1);
	write(1, &hex_table[c / 16], 1);
	write(1, &hex_table[c % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	cnt;

	cnt = 0;
	while (str[cnt] != '\0')
	{
		if (str[cnt] < 0)
		{
			str[cnt] = str[cnt] + 256;
		}
		if ((str[cnt] >= 0 && str[cnt] <= 31) || (str[cnt] == 127))
		{
			to_hex(str[cnt]);
		}
		else
		{
			write(1, &str[cnt], 1);
		}
		cnt++;
	}
}

// int	main(void)
// {
// 	char str[] = "Como \nestamos";
// 	ft_putstr_non_printable(str);
// }