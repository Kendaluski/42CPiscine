/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaen-mo <jjaen-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 17:06:20 by jjaen-mo          #+#    #+#             */
/*   Updated: 2023/03/22 17:35:05 by jjaen-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	cnt;
	int	res;

	cnt = 0;
	while (str[cnt] != '\0')
	{
		if (str[cnt] >= 65 && str[cnt] <= 90)
			res = 1;
		else if (str[cnt] >= 97 && str[cnt] <= 122)
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

// int main()
// {
//     char *string;
//     int num;
//     string="hafi2ngoerg";
//     num=ft_str_is_alpha(string);
//     num=num+48;
//     write(1,&num,1);
// }