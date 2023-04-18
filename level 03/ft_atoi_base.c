/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iganiev <iganiev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 10:59:58 by iganiev           #+#    #+#             */
/*   Updated: 2023/04/18 11:00:15 by iganiev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi_base(const char *str, int str_base)
{
	int	res;
	int	sign;

	res = 0;
	sign = 1;
	if (*str == '-')
	{
		sign *= -1;
		str++;
	}
	while (*str != '\0')
	{	
		if (*str >= '0' && *str <= '9')
			res = res * str_base + *str - 48;
		else if (*str >= 'A' && *str <= 'F')
			res = res * str_base + *str - 55;
		else if (*str >= 'a' && *str <= 'f')
			res = res * str_base + *str - 87;
		else
		{
			break ;
		}
		str++;
	}
	return (sign * res);
}
