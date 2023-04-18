/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaen-mo <jjaen-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 03:29:39 by jjaen-mo          #+#    #+#             */
/*   Updated: 2023/03/30 03:10:02 by jjaen-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_str(char *str)
{
	int	cnt;

	cnt = 0;
	while (str[cnt] != '\0')
	{
		write(1, &str[cnt], 1);
		cnt++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	int	cnt;

	if (argc > 1)
	{
		cnt = argc - 1;
		while (cnt > 0)
		{
			put_str(argv[cnt]);
			cnt--;
		}
	}
}
