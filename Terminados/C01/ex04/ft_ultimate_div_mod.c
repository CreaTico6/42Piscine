/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnuno-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 00:42:20 by tnuno-mo          #+#    #+#             */
/*   Updated: 2024/09/14 12:04:56 by tnuno-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	x;
	int	y;

	x = *a;
	y = *b;
	*a = x / y;
	*b = x % y;
}


#include <stdio.h>

int main (void)
{
	int n1 = 7;
	int n2 = 2;

	printf ("The division of %d by %d\n", n1, n2);

	ft_ultimate_div_mod(&n1, &n2);

	printf ("results in div=%d and mod=%d\n", n1, n2);
}

