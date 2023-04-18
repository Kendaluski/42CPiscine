/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numbers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaen-mo <jjaen-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 01:41:13 by jjaen-mo          #+#    #+#             */
/*   Updated: 2023/03/26 23:43:04 by jjaen-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
    int cnt;
    cnt=0;
    while(str[cnt] != '\0')
        cnt++;
    return (cnt);
}

int ft_atoi(char *str)
{
    int cnt;
    int sign;
    int numh;
    int num;
    num=0;
    sign=1;
    cnt=0;
    numh=0;
    while(str[cnt] == ' ')
        cnt++;
    while(str[cnt] == '-')
    {
        if(str[cnt] == '-')
            numh++;
        cnt++;
    }
    while(str[cnt] >= 48 && str[cnt] <= 57)
    {
        num=num*10+(str[cnt]-48);
        cnt++;
    }
    if(numh == 1)
        sign=-1;
    else if(numh == 0)
        sign=1;
    else
        return (0);
        
    num=num*sign;
    return (num);
}