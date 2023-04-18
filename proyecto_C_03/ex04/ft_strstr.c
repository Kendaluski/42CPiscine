/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaen-mo <jjaen-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 20:19:06 by jjaen-mo          #+#    #+#             */
/*   Updated: 2023/03/27 15:02:51 by jjaen-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	cnt1;
	int	cnt2;

	cnt1 = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[cnt1] != '\0')
	{
		cnt2 = 0;
		while (str[cnt1 + cnt2] == to_find[cnt2] && str[cnt1 + cnt2] != '\0')
			cnt2++;
		if (to_find[cnt2] == '\0')
			return (str + cnt1);
		cnt1++;
	}
	return (0);
}

// int main()
// {
//     char str1[]="We are making the mother of alall omelettes here, Jack";
//     char str2[1024] = "all";
//     printf("%s\n",strstr(str1,str2));
// 	printf("%s",ft_strstr(str1,str2));
// }