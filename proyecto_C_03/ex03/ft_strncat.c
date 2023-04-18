/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaen-mo <jjaen-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 20:10:30 by jjaen-mo          #+#    #+#             */
/*   Updated: 2023/03/28 16:42:04 by jjaen-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	cnt;
	unsigned int	isrc;

	isrc = 0;
	cnt = 0;
	while (dest[isrc] != '\0')
		isrc++;
	while (cnt < nb && src[cnt] != '\0')
	{
		dest[isrc] = src[cnt];
		cnt++;
		isrc++;
	}
	dest[isrc] = '\0';
	return (dest);
}

// #include <stdio.h>
// int main()
// {
//     char str1[]="Son";
//     char str2[1024]="Nanomachines ";
//     *str1=*ft_strncat(str1,str2,6);
//     printf("%s",str1);
// }