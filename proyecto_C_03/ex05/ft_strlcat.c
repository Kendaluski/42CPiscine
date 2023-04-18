/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaen-mo <jjaen-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 18:53:24 by jjaen-mo          #+#    #+#             */
/*   Updated: 2023/03/28 16:56:57 by jjaen-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	cnt;

	cnt = 0;
	while (str[cnt] != '\0')
		cnt++;
	return (cnt);
}

unsigned int	ft_strlcat(char *dest, char *str, unsigned int size)
{
	unsigned int	cnt;
	unsigned int	maxd;
	unsigned int	maxs;

	cnt = 0;
	maxd = ft_strlen(dest);
	maxs = ft_strlen(str);
	if (maxd >= size || size == 0)
		return (maxs + size);
	while (str[cnt] != '\0' && maxd + cnt <= size - 1)
	{
		dest[maxd + cnt] = str[cnt];
		cnt++;
	}
	dest[maxd + cnt] = '\0';
	return (maxd + maxs);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	str1[12] = "machines Son";
// 	int		num;
//     char	str2[16] = "Nano";
// 	char str3[16]="Nano";

// 	num = ft_strlcat(str2, str1, 3);
// 	printf("%s", str2);
// 	printf("%i\n",num);
// 	num = strlcat(str3, str1, 3);
// 	printf("\n%s", str3);
// 	printf("%i",num);
// }