/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaen-mo <jjaen-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 16:29:50 by jjaen-mo          #+#    #+#             */
/*   Updated: 2023/03/19 17:35:33 by jjaen-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void show_board(int board[16]);
int *create_board(void);
int	*change_col(int board[16], char arr[4],int start);
int	*change_row(int board[16], char arr[4]);

char	*remove_sp(char *str)
{
	int		cnt;
	int		cnt2;
	char	*res;

	res = malloc(sizeof(*str));
	cnt = 0;
	cnt2 = 0;
	while (str[cnt] != '\0')
	{
		if (str[cnt] != ' ')
		{
			res[cnt2] = str[cnt];
			cnt2++;
		}
		cnt++;
	}
	res[cnt2] = '\0';
	return (res);
	free(res);
}

char	*split_array(char *str, int start, int end)
{
	char	*res;
	int		cnt;

	cnt = 0;
	res = malloc(4);
	while (start < end)
	{
		res[cnt] = str[start];
		cnt++;
		start++;
	}
	cnt=0;
	return (res);
	free(res);
}

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		write(1, "[ERROR]: You entered a value of arguments not valid\n", 52);
		return (1);
	}
	else
	{
		char *icolum_up;
		char *icolum_down;
		char *irow_right;
		char *irow_left;
		char *arr;
		int *board; 
		int cnt;

		arr = remove_sp(argv[1]);
		icolum_up = split_array(arr, 0, 4);
		icolum_down = split_array(arr, 4, 8);
		irow_left = split_array(arr, 8, 12);
		irow_right = split_array(arr, 12, 16);
	
		board=create_board();
		board=change_col(board,icolum_up,0);
		board=change_col(board,icolum_down,12);
		board=change_row(board,irow_left);
		board=change_row(board,irow_right);
		
		show_board(board);
	}
}