/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaen-mo <jjaen-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 10:30:36 by jjaen-mo          #+#    #+#             */
/*   Updated: 2023/03/16 19:36:15 by jjaen-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	num1;
	int	num2;

	num1 = *a;
	num2 = *b;
	*a = num1 / num2;
	*b = num1 % num2;
}

// int main()
// {
//     int num1;
//     int num2;
//     int *ptr1;
//     int *ptr2;

//     num1=20;
//     num2=10;
//     ptr1=&num1;
//     ptr2=&num2;

//     ft_ultimate_div_mod(ptr1,ptr2);

//     printf("%d\n", *ptr1);
//     printf("%d\n", *ptr2);

// }