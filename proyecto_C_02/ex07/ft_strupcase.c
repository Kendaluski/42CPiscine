/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaen-mo <jjaen-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 21:12:32 by jjaen-mo          #+#    #+#             */
/*   Updated: 2023/03/20 10:12:11 by jjaen-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int		cnt;
	char	*str2;

	str2 = str;
	cnt = 0;
	while (str2[cnt] != '\0')
	{
		if (str2[cnt] >= 97 && str2[cnt] <= 122)
		{
			str2[cnt] = str[cnt] - 32;
		}
		cnt++;
	}
	return (str);
}

// int main()
// {
//     char str[] = "Tem a";

//     ft_strupcase(str);
//     printf("%s", str);
// }