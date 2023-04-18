/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaen-mo <jjaen-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 20:19:11 by jjaen-mo          #+#    #+#             */
/*   Updated: 2023/03/26 23:43:32 by jjaen-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void show_nb(int num, char str[1024][1024]);
void show_arr(char str[1024][1024]);
void trio_div(char *num);
int ft_atoi(char *str);

int	main(int argc, char *argv[])
{
    if (argc != 2 && argc != 3)
    {
        write(1,"Error",5);
        return(1);
    }
    else 
    {
        int stance;
        char buff[350];
        int cnt = 0;
        int cnt1 = 0;
        int cnt2 = 0;
        int cnt3;
        char str[1024][1024];
        char *filename;
        filename="numbers.dict";
        if(argc == 3)
        {
            filename=argv[1];
        }
        stance = open(filename, O_RDONLY);
        read(stance, buff, 350);
        while (buff[cnt1] != '\0')
        {
            while ((buff[cnt] < 97 || buff[cnt] > 122) && buff[cnt] != '\0')
                cnt++;
            cnt3=0;
            while ((buff[cnt] >= 97 && buff[cnt] <= 122) && buff[cnt] != '\0')
            {
                str[cnt2][cnt3] = buff[cnt];
                cnt++;
                cnt3++;
            }
            cnt2++;
            cnt1++;
        }
        str[cnt2][cnt3] = '\0';
        close(stance);
        char *num;
        if (argc == 3)
            num=argv[2];
        else
            num=argv[1];
        
        int realnum=ft_atoi(num);
        //trio_div(num);
        show_nb(realnum,str);
    }
}