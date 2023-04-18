/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iganiev <iganiev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 11:00:53 by iganiev           #+#    #+#             */
/*   Updated: 2023/04/18 11:01:48 by iganiev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

/*- With (1, 3) you will return an array containing 1, 2 and 3.
- With (-1, 2) you will return an array containing -1, 0, 1 and 2.
- With (0, 0) you will return an array containing 0.
- With (0, -3) you will return an array containing 0, -1, -2 and -3.*/

int	*ft_range(int start, int end)
{
	int	i;
	int	len;
	int	*numbers;

	i = 0;
	len = abs(end - start) + 1;
	numbers = malloc(sizeof(int) * len + 1);
	if (!numbers)
		return (0);
	numbers[i] = start;
	while (i <= len)
	{
		if (start > end)
		{
			numbers[i] = start;
			start--;
		}
		else
		{
			numbers[i] = start;
			start++;
		}
		i++;
	}
	return (numbers);
}

// int main()
// {
// 	int i = 0;
// 	int j = 0;
// 	int len = 1;
// 	int *res = ft_range(i, j);
// 	int stepper = 0;
// 	while (stepper< len)
// 	{
// 		printf("%d\n", res[stepper]);
// 		stepper++;
// 	}
// }