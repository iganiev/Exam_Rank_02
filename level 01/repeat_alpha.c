/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iganiev <iganiev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 11:23:52 by iganiev           #+#    #+#             */
/*   Updated: 2023/04/18 11:23:59 by iganiev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char *av[])
{
	int	i;
	int	lettercount;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			lettercount = 0;
			if (av[1][i] >= 'A' && av[1][i] <= 'Z')
			{	
				lettercount = av[1][i] - 64;
				while (lettercount--)
					write (1, &av[1][i], 1);
			}
			else if (av[1][i] >= 'a' && av[1][i] <= 'z')
			{
				lettercount = av[1][i] - 96;
				while (lettercount--)
					write (1, &av[1][i], 1);
			}
			else 
				write (1, &av[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
}
