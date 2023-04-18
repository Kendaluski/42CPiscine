/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaen-mo <jjaen-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 16:58:26 by jjaen-mo          #+#    #+#             */
/*   Updated: 2023/03/25 12:25:34 by jjaen-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	cnt;

	cnt = 0;
	while (s1[cnt] != '\0' || s2[cnt] != '\0')
	{
		if (s1[cnt] != s2[cnt])
			return (s1[cnt] - s2[cnt]);
		cnt++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char *str1;
// 	char *str2;
// 	int res;
// 	str1 = "hola";
// 	str2 = "hola";
// 	res = ft_strcmp(str1, str2);
// 	printf("%i", res);
// 	res=strcmp(str1,str2);
// 	printf("\n%i",res);
// }