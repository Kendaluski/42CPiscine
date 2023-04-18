/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaen-mo <jjaen-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 12:39:05 by jjaen-mo          #+#    #+#             */
/*   Updated: 2023/03/16 19:53:29 by jjaen-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	cnt;
	int	swap;
	int	cnt2;
	int	min;

	cnt = 0;
	while (cnt < size - 1)
	{
		min = cnt;
		cnt2 = cnt + 1;
		while (cnt2 < size)
		{
			if (tab[cnt2] < tab[min])
			{
				min = cnt2;
			}
			cnt2++;
		}
		swap = tab[min];
		tab[min] = tab[cnt];
		tab[cnt] = swap;
		cnt++;
	}
}

// int	main(void)
// {

// 	int arr[10] = {-9, 9, 8, 8, 9, 2, 2, 3, 3, 7};

// 	for (int i = 0; i < 10; i++)
// 		printf("%d ", arr[i]);

// 	printf("\n");

// 	ft_sort_int_tab(arr, 10);

// 	for (int i = 0; i < 10; i++)
// 		printf("%d ", arr[i]);

// 	return (0);
// }