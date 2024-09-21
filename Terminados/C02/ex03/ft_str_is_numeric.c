/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnuno-mo <tnuno-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 21:58:06 by tnuno-mo          #+#    #+#             */
/*   Updated: 2024/09/11 22:59:11 by tnuno-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	if (*str == '\0')
		return (1);
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= '0' && str[i] <= '9'))
			i++;
		else
		{
			return (0);
		}
	}
	return (1);
}
/*
#include <stdio.h>

int main (void)
{
	char *test = "6495432";
	printf ("%d\n", ft_str_is_numeric (test));
	return (0);
}
*/