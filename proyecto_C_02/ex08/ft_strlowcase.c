/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaen-mo <jjaen-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 10:10:42 by jjaen-mo          #+#    #+#             */
/*   Updated: 2023/03/23 13:58:38 by jjaen-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int		cnt;
	char	*str2;

	str2 = str;
	cnt = 0;
	while (str2[cnt] != '\0')
	{
		if (str2[cnt] >= 65 && str2[cnt] <= 90)
		{
			str2[cnt] = str[cnt] + 32;
		}
		cnt++;
	}
	return (str);
}

// int main()
// {
//     char str[]="TEM A";
//     ft_strlowcase(str);
//     printf("%s",str);
// }