/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnuno-mo <tnuno-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 18:21:01 by tnuno-mo          #+#    #+#             */
/*   Updated: 2024/09/11 23:00:43 by tnuno-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 97 && str[i] <= 122))
		{
			str[i] = (str[i] - 32);
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int main (void)
{
	char test[] = "Am I screaming?!";
	printf ("%s\n", ft_strupcase (test));
	return (0);
}
*/