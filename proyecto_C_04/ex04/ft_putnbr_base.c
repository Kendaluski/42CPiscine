/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaen-mo <jjaen-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 17:05:41 by jjaen-mo          #+#    #+#             */
/*   Updated: 2023/03/28 19:47:02 by jjaen-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	cnt;

	cnt = 0;
	while (str[cnt] != '\0')
		cnt++;
	return (cnt);
}

int	check_base(char *base)
{
	int	cnt;

	cnt = 0;
	while (base[cnt] != '\0')
	{
		if (base[cnt] == base[cnt+1])
			return (1);
		if (base[cnt] == '+' || base[cnt] == '-')
			return (1);
		cnt++;
	}
	if (cnt == 1)
		return (1);
	return (0);
}

void show_base(int num, char *base, int size)
{
	if(num / size == 0)
		write(1,&base[num],1);
	else
	{
		show_base(num / size, base, size);
		write(1,&base[num%size],1);
	}

}

void	ft_putnbr_base(int nbr, char *base)
{
    int baseck;
	int size;

    baseck=check_base(base);
	size=ft_strlen(base);
    if(baseck == 0)
    {
        show_base(nbr,base,size);
    }
}

// int main()
// {
//     char base[]= "abcdef";

//     ft_putnbr_base(14,base);
// }