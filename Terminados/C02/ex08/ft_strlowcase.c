/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnuno-mo <tnuno-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 18:46:31 by tnuno-mo          #+#    #+#             */
/*   Updated: 2024/09/11 23:01:05 by tnuno-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65 && str[i] <= 90))
		{
			str[i] = (str[i] + 32);
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int main (void)
{
	char test[] = "Definitely I AM NOT SCREAMMING!!";
	printf ("%s\n", ft_strlowcase (test));
	return (0);
}
*/