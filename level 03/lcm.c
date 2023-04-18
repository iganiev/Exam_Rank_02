/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iganiev <iganiev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 11:08:55 by iganiev           #+#    #+#             */
/*   Updated: 2023/04/18 11:09:23 by iganiev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int	lcm;

	if (a == 0 || b == 0)
		return (lcm = 0);
	if (a > b)
		lcm = a;
	else if (b > a)
		lcm = b;
	while (!((lcm % a == 0) && (lcm % b  == 0)))
	{
		lcm++;
	}
	return (lcm);
}

// int main()
// {
// 	printf ("%d", lcm(6, 12));
// }