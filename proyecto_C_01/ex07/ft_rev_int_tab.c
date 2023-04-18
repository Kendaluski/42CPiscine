/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaen-mo <jjaen-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 11:22:56 by jjaen-mo          #+#    #+#             */
/*   Updated: 2023/03/16 19:53:14 by jjaen-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	cnt;
	int	swap;

	cnt = 0;
	while (cnt < size / 2)
	{
		swap = tab[cnt];
		tab[cnt] = tab[size - 1];
		tab[size - 1] = swap;
		cnt++;
		size--;
	}
}

// int	main(void)
// {
// 	Declare an array arr with the elements
// 	int arr[10] = {54,27,15,6,47,134,69,153,3,51};
// 	We use a for loop to print all the elements one by one
// 	for (int i = 0; i < 10; i++)
// 		printf("%d ", arr[i]);
// 	printf("\n");
// 	ft_rev_int_tab(arr, 10);
// 	for (int i = 0; i < 10; i++)
// 		printf("%d ", arr[i]);
// 	return (0);
// }