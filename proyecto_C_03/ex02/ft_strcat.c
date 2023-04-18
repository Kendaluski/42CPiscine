/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaen-mo <jjaen-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 18:44:45 by jjaen-mo          #+#    #+#             */
/*   Updated: 2023/03/27 01:01:52 by jjaen-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	isrc;
	int	cnt;

	isrc = 0;
	while (dest[isrc] != '\0')
		isrc++;
	cnt = 0;
	while (src[cnt] != '\0')
	{
		dest[isrc] = src[cnt];
		isrc++;
		cnt++;
	}
	dest[isrc] = '\0';
	return (dest);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char str1[] = "Son";
// 	char str2[1024] = "Nanomachines ";
// 	*str2 = *ft_strcat(str2, str1);
// 	printf("%s", str2);
// 	*str2=*strcat(str2,str1);
// 	printf("\n%s",str2);
// }