/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaen-mo <jjaen-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 20:56:24 by jjaen-mo          #+#    #+#             */
/*   Updated: 2023/03/24 10:57:06 by jjaen-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	cnt;
	int	res;

	if (str != NULL)
	{
		cnt = 0;
		while (str[cnt] != '\0')
		{
			if (str[cnt] <= 31 || str[cnt] >= 127)
			{
				res = 0;
				return (res);
			}
			else
				res = 1;
			cnt++;
		}
		if (cnt == 0)
		{
			res = 1;
		}
	}
	res = 1;
	return (res);
}

// int	main(void)
// {
// 	char *str;
// 	int res;
// 	str = "abfiewbv\ni";
// 	res = ft_str_is_printable(str);
// 	write(1, &res, 1);
// }