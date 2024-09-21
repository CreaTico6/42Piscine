/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnuno-mo <tnuno-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 22:08:43 by tnuno-mo          #+#    #+#             */
/*   Updated: 2024/09/11 22:59:27 by tnuno-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	if (*str == '\0')
		return (1);
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z'))
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
	char *test = "only";
	printf ("%d\n", ft_str_is_lowercase (test));
	return (0);
}
*/
