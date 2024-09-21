/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnuno-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 00:21:11 by tnuno-mo          #+#    #+#             */
/*   Updated: 2024/09/07 00:39:31 by tnuno-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
#include <stdio.h>

int main (void)
{
	int x = 11;
	int y = 3;
	int div;
	int mod;	

	ft_div_mod(x, y, &div, &mod);
	
	printf ("The division of %d by %d, ", x, y);
	printf ("results in %d with mod %d.\n", div, mod);
	return 0;
}
*/
