/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnuno-mo <tnuno-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 11:03:25 by tnuno-mo          #+#    #+#             */
/*   Updated: 2024/09/09 18:19:34 by tnuno-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		i++;
		j--;
	}
}

/*
#include <stdio.h>

int main (void)
{
	int test[] = {1, 2, 3, 4, 5};
	int size = 5;

	printf("Before change: %d %d %d %d %d\n", 
		test[0], test[1], test[2], test[3], test[4]);
	ft_rev_int_tab(test, size);
	printf ("After change: %d %d %d %d %d\n",
		test[0], test[1], test[2], test[3], test[4]);
}
*/