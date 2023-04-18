/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaen-mo <jjaen-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 03:14:56 by jjaen-mo          #+#    #+#             */
/*   Updated: 2023/03/30 03:09:57 by jjaen-mo         ###   ########.fr       */
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

	cnt = 1;
	if (argc > 1)
	{
		while (cnt < argc)
		{
			put_str(argv[cnt]);
			cnt++;
		}
	}
}
