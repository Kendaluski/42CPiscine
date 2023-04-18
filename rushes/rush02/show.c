/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   show.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaen-mo <jjaen-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 16:11:05 by jjaen-mo          #+#    #+#             */
/*   Updated: 2023/03/26 21:41:44 by jjaen-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
void	show_arr(char str[1024][1024])
{
	int	cnt;
	int	cnt2;

	cnt = 0;
    cnt2=0;
	while (str[cnt][cnt2] != '\0')
	{
        cnt2=0;
		while (str[cnt][cnt2] != '\0')
		{
			write(1, &str[cnt][cnt2], 1);
			cnt2++;
		}
		write(1, "\n", 1);
		cnt++;
	}
}

void put_str(char str[1024][1024], int num)
{
    int cnt;
    cnt = 0;
    while(str[num][cnt] != '\0')
    {
        write(1,&str[num][cnt],1);
        cnt++;
    }
}

void show_nb(int num,char str[1024][1024])
{
        int pos;

        if(num >= 1 && num <= 20)
        {
           put_str(str,num);
        }
        else if(num >= 21 && num <= 99)
        {
            pos=20 + (num/ 10 - 2);
            put_str(str,pos);
            pos=num%10;
            if(pos != 0)
            {
                write(1," ",1);
                put_str(str,pos);
            }
        }
        else if(num >= 100 && num <= 999)
        {
            pos=num/100;
            put_str(str,pos);
            write(1," ",1);
            put_str(str,28);
            write(1," and ",5);
            show_nb(num%100,str);
        }        
        else if(num >= 1000 && num <= 9999)
        {
            pos=num/1000;
            put_str(str,pos);
            write(1," ",1);
            put_str(str,29);
            write(1,", ",2);
            show_nb(num%1000,str);
        }

}