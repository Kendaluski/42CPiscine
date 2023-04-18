/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaen-mo <jjaen-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 10:20:30 by jjaen-mo          #+#    #+#             */
/*   Updated: 2023/03/16 10:30:43 by jjaen-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int main()
// {
//     int num1;
//     int num2;
//     int resul1;
//     int resul2;
//     int *ptr1;
//     int *ptr2;

//     num1=20;
//     num2=10;
//     ptr1=&resul1;
//     ptr2=&resul2;

//     ft_div_mod(num1,num2,ptr1,ptr2);

//     printf("%d\n", *ptr1);
//     printf("%d\n", *ptr2);

// }