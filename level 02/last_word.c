/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iganiev <iganiev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 11:19:00 by iganiev           #+#    #+#             */
/*   Updated: 2023/04/18 11:19:01 by iganiev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char *av[])
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (ac == 2)
	{
		while (av[1][i])
			i++;
		i--;
		while (av[1][i] == ' ' || av[1][i] == '\t')
			--i;
		j = i;
		while (av[1][i] && (av[1][i] != ' ' && av[1][i] != '\t'))
			--i;
		i++;
		while (av[1][i] && i <= j)
		{
			write (1, &av[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
}
