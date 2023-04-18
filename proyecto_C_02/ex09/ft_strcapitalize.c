/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaen-mo <jjaen-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 10:17:20 by jjaen-mo          #+#    #+#             */
/*   Updated: 2023/03/23 13:58:33 by jjaen-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_lowercase(char *str)
{
	int	cnt;

	cnt = 0;
	while (str[cnt] != '\0')
	{
		if ((str[cnt] >= 65) && (str[cnt] <= 90))
			str[cnt] = str[cnt] + 32;
		cnt++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	cnt;
	int	case_ck;

	ft_lowercase(str);
	cnt = 0;
	case_ck = 1;
	while (str[cnt] != '\0')
	{
		if ((str[cnt] >= 97) && (str[cnt] <= 122))
		{
			if (case_ck == 1)
				str[cnt] = str[cnt] - 32;
			case_ck = 0;
		}
		else if ((str[cnt] >= 48) && (str[cnt] <= 57))
			case_ck = 0;
		else
			case_ck = 1;
		cnt++;
	}
	return (str);
}

// int	main(void)
// {
// 	char str[] = "we-are 42makIng the a mother of all omElettes here, jack";
// 	ft_strcapitalize(str);
// 	printf("%s", str);
// }