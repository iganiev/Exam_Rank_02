/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iganiev <iganiev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 11:09:33 by iganiev           #+#    #+#             */
/*   Updated: 2023/04/18 11:10:42 by iganiev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	gcd(int a, int b)
{
	if (b == 0) 
		return (a);
	else
		return (gcd(b, a % b));
}

int	main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int a = atoi(argv[1]);
		int b = atoi(argv[2]);
		int result = gcd(a, b);
		printf("%d", result);
		printf("\n");
	}
	else
		printf("\n");
}
