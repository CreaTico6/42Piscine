/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnuno-mo <tnuno-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 22:12:21 by tnuno-mo          #+#    #+#             */
/*   Updated: 2024/09/11 22:59:39 by tnuno-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	if (*str == '\0')
		return (1);
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z'))
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
	char *test = "BIG";
	printf ("%d\n", ft_str_is_uppercase (test));
	return (0);
}
*/