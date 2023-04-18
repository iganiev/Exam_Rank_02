/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iganiev <iganiev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 11:02:44 by iganiev           #+#    #+#             */
/*   Updated: 2023/04/18 11:03:05 by iganiev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_rrange(int start, int end)
{
	int	i;
	int	len;
	int	*rnumbers;

	i = 0;
	len = abs(end - start) + 1;
	rnumbers = malloc(sizeof(int) * len + 1);
	if (!rnumbers)
		return (0);
	rnumbers[i] = end;
	while (i <= len)
	{
		if (end > start)
		{
			rnumbers[i] = end;
			end--;
		}
		else
		{
			rnumbers[i] = end;
			end++;
		}
		i++;
	}
	return (rnumbers);
}

// int main()
// {
// 	int i = 0;
// 	int j = -3;
// 	int len = 4;
// 	int *number = ft_rrange(i, j);
// 	int step = 0;
// 	while (step < len)
// 	{
// 		printf("%d\n", number[step]);
// 		step++;
// 	}
// }