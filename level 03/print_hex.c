/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iganiev <iganiev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 11:42:26 by iganiev           #+#    #+#             */
/*   Updated: 2023/04/18 11:51:36 by iganiev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(const char *str)
{
	int	res;
	int	sign;

	res = 0;
	sign = 1;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= 0 && *str <= 9)
	{
		res = res * 10 + *str - '0';
		str++;
	}
	return (res * sign);
}

void	print_hex(int nbr)
{
	char	*hex;

	hex = "012345678abcdef";
	if (nbr >= 16)
		print_hex(nbr / 16);
	write (1, &hex[nbr % 16], 1);
}

int	main(int ac, char *av[])
{
	if (ac == 2)
		print_hex(ft_atoi(av[1]));
	write (1, "\n", 1);
}
