/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnuno-mo <tnuno-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 16:27:45 by tnuno-mo          #+#    #+#             */
/*   Updated: 2024/09/09 18:23:23 by tnuno-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	j = 0;
	while (j < size -1)
	{
		i = 0;
		while (i < (size - 1))
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i++;
		}
		j++;
	}
}
/*
#include <stdio.h>

int main (void)
{
	int test[] = {5, 2, 1, 3, 4};
	int size = 5;

	printf("Before change: %d %d %d %d %d\n", 
		test[0], test[1], test[2], test[3], test[4]);
	ft_sort_int_tab(test, size);
	printf ("After change: %d %d %d %d %d\n",
		test[0], test[1], test[2], test[3], test[4]);
	return (0);
}
*/