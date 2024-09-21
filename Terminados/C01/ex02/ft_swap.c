/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnuno-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 00:04:53 by tnuno-mo          #+#    #+#             */
/*   Updated: 2024/09/07 00:19:33 by tnuno-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*
#include <stdio.h>

int main (void)
{
	int x = 10;
	int y = 6;

	printf ("before swap %d %d\n", x, y);
	
	ft_swap(&x, &y);
	
	printf ("after swap %d %d\n", x, y);
	
	return (0);
}
*/
