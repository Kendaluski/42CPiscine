/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaen-mo <jjaen-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 03:10:55 by jjaen-mo          #+#    #+#             */
/*   Updated: 2023/03/30 03:09:53 by jjaen-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	*string;
	int		cnt;

	string = argv[0];
	cnt = 0;
	argc = 0;
	while (string[cnt] != '\0')
	{
		write(1, &string[cnt], 1);
		cnt++;
	}
	write(1, "\n", 1);
}
