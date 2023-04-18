/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaen-mo <jjaen-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 20:54:36 by jjaen-mo          #+#    #+#             */
/*   Updated: 2023/03/22 10:52:12 by jjaen-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	cnt;

	cnt = 0;
	while (src[cnt] != '\0')
	{
		dest[cnt] = src[cnt];
		cnt++;
	}
	dest[cnt] = '\0';
	return (dest);
}

// #include <stdio.h>
// int main()
// {
//     char *str1;
//     char *str2;
//     str1="hola";
//     str2=ft_strcpy(str2,str1);
// 	printf("%s",str1);
//     printf("%s", str2);

// }