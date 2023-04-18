/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaen-mo <jjaen-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 20:29:02 by jjaen-mo          #+#    #+#             */
/*   Updated: 2023/03/24 11:00:16 by jjaen-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	cnt;
	int	res;

	cnt = 0;
	while (str[cnt] != '\0')
	{
		if (str[cnt] >= 97 && str[cnt] <= 122)
			res = 1;
		else
		{
			res = 0;
			return (res);
		}
		cnt++;
	}
	if (cnt == 0)
	{
		res = 1;
	}
	return (res);
}

// int	main(void)
// {
// 	int res;
// 	char *str;
// 	str = "";

// 	res = ft_str_is_lowercase(str);
// 	res = res + 48;
// 	write(1, &res, 1);
// }