/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaen-mo <jjaen-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 20:10:15 by jjaen-mo          #+#    #+#             */
/*   Updated: 2023/03/19 20:29:20 by jjaen-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	cnt;
	int	res;

	cnt = 0;
	while (str[cnt] != '\0')
	{
		if (str[cnt] >= 48 && str[cnt] <= 57)
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
//     int num;
//     str="284234ffef6";
//     num=ft_str_is_numeric(str);
//     num=num+48;
//     write(1,&num,1);
// }