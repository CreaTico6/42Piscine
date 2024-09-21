/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnuno-mo <tnuno-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 20:43:08 by tnuno-mo          #+#    #+#             */
/*   Updated: 2024/09/18 00:47:28 by tnuno-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	res;

	res = 0;
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	res = ft_fibonacci(index -1) + ft_fibonacci(index - 2);
	return (res);
}

/*
#include <stdio.h>

int main(void)
{
	printf("%d\n", ft_fibonacci(11));
}
*/
