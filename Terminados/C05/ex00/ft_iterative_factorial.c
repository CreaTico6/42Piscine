/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnuno-mo <tnuno-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 15:06:17 by tnuno-mo          #+#    #+#             */
/*   Updated: 2024/09/18 00:43:05 by tnuno-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	i = nb -1;
	while (i > 0)
	{
		nb = nb * i;
		i--;
	}
	return (nb);
}
/*
#include <stdio.h>

int	main (void)
{
	printf("%d", ft_iterative_factorial(5));
	return (0);
}
*/