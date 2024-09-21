/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnuno-mo <tnuno-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 23:15:20 by tnuno-mo          #+#    #+#             */
/*   Updated: 2024/09/18 00:46:55 by tnuno-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	i = nb - 1;
	while (i > 1)
	{
		if (nb % i != 0)
			i--;
		else
			return (0);
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) != 1)
		nb++;
	return (nb);
}
/*
#include <stdio.h>

int main(void)
{
	printf("%d\n", ft_find_next_prime(10));
	printf("%d\n", ft_find_next_prime(7));
}
*/