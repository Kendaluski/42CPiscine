/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board_manage.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaen-mo <jjaen-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 17:44:25 by jjaen-mo          #+#    #+#             */
/*   Updated: 2023/03/19 17:34:46 by jjaen-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void show_board(int board[16])
{		
    int cnt;      
        cnt=0;
		while(cnt < 16)
		{
			write(1,&board[cnt],1);
			write(1," ",1);
			
			if((cnt == 3) || (cnt == 7) || (cnt == 11) || (cnt==15) )
			{
				write(1,"\n",1);
			}
			cnt++;
		}
}

int *create_board(void)
{
	int *board;
	int cnt;
	board=malloc(16);
	cnt=0;
	while(cnt < 16)
	{
		board[cnt]=48;
		cnt++;
	}
	return(board);
	free(board);
}

int	*change_col(int board[16], char arr[4],int start)
{
		int cnt;
		int cnt2;
		cnt=0;

		while(arr[cnt] != '\0')
		{
			if(arr[cnt] == '4')
			{
				cnt2='1';
				while(cnt2 <= '4')
				{
					board[cnt+start]=cnt2;
					start=start+4;
					cnt2++;
				}
			}
			cnt++;
		}
		return board;
}

int	*change_row(int board[16], char arr[4])
{
		int cnt;
		cnt=0;
		while(arr[cnt] != '\0')
		{
			if(arr[cnt] == '4')
			{
				
				board[cnt]='1';
				board[cnt+1]='2';
				board[cnt+2]='3';
				board[cnt+3]='4';
			}
			cnt++;
		}
		return board;
}