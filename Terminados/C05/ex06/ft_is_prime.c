/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnuno-mo <tnuno-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 22:23:44 by tnuno-mo          #+#    #+#             */
/*   Updated: 2024/09/18 00:46:16 by tnuno-mo         ###   ########.fr       */
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
/*
#include <stdio.h>

int main(void)
{
	printf("%d\n", ft_is_prime(8));
	printf("%d\n", ft_is_prime(7));
}
*/