/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaen-mo <jjaen-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 10:38:39 by jjaen-mo          #+#    #+#             */
/*   Updated: 2023/03/23 13:58:29 by jjaen-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	cnt;

	cnt = 0;
	if (size <= 1)
	{
		return (cnt);
	}
	else
	{
		while ((cnt < size - 1) && (src[cnt] != '\0'))
		{
			dest[cnt] = src[cnt];
			cnt++;
		}
		dest[cnt] = '\0';
		while (src[cnt] != '\0')
		{
			cnt++;
		}
	}
	return (cnt);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char dest[]="";
// 	char source[] = "Nanomachines Son";
// 	int tsize;
// 	tsize = ft_strlcpy(dest, source, 6);
// 	printf("%i\n", tsize);
//     printf("%s\n",dest);
//     int n = 0;
//     while (n < 16)
//     {
//         printf("%c", source[n]);
//         n++;
//     }
//     printf("\n");

//     printf("%s",source);
// }