/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaen-mo <jjaen-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 18:58:47 by jjaen-mo          #+#    #+#             */
/*   Updated: 2023/03/30 03:16:46 by jjaen-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	cnt;

	cnt = 0;
	while (s1[cnt] != '\0' || s2[cnt] != '\0')
	{
		if (s1[cnt] != s2[cnt])
			return (s1[cnt] - s2[cnt]);
		cnt++;
	}
	return (0);
}

void	put_argvs(char **str)
{
	int	cnt;
	int	cnt2;

	cnt = 1;
	cnt2 = 0;
	while (str[cnt][cnt2] != '\0')
	{
		cnt2 = 0;
		while (str[cnt][cnt2] != '\0')
		{
			write(1, &str[cnt][cnt2], 1);
			cnt2++;
		}
		write(1, "\n", 1);
		cnt++;
	}
}

int	main(int argc, char *argv[])
{
	int		cnt;
	int		cnt2;
	int		minpos;
	char	*swap;

	if (argc > 1)
	{
		cnt = 1;
		while (cnt < argc)
		{
			cnt2 = cnt + 1;
			minpos = cnt;
			while (cnt2 < argc)
			{
				if (ft_strcmp(argv[cnt2], argv[minpos]) > 0)
					minpos = cnt2;
				cnt2++;
			}
			swap = argv[minpos];
			argv[minpos] = argv[cnt];
			argv[cnt] = swap;
			cnt++;
		}
		put_argvs(argv);
	}
}
