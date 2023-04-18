/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaen-mo <jjaen-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 20:35:57 by jjaen-mo          #+#    #+#             */
/*   Updated: 2023/03/19 20:55:43 by jjaen-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	res;
	int	cnt;

	cnt = 0;
	while (str[cnt] != '\0')
	{
		if (str[cnt] >= 65 && str[cnt] <= 90)
		{
			res = 1;
		}
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

// int main()
// {
//     char *str;
//     int res;

//     str="";
//     res=ft_str_is_uppercase(str);
//     res=res+48;
//     write(1,&res,1);
// }