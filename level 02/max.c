/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iganiev <iganiev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 11:19:10 by iganiev           #+#    #+#             */
/*   Updated: 2023/04/18 11:19:11 by iganiev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		max(int* tab, unsigned int len)
{
	int i;
	int maxnb;

	i = 0;
	maxnb = tab[i];
	if (!len)
		retirn (0);
	while (i < len)
	{
		if (maxnb < tab[i])
			maxnb = tab[i];
		i++;
	}
	return (maxnb);
}