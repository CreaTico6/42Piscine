/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnuno-mo <tnuno-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 18:02:15 by tnuno-mo          #+#    #+#             */
/*   Updated: 2024/09/11 22:59:46 by tnuno-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	if (*str == '\0')
		return (1);
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 31 && str[i] != 127))
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
	char *test = "Tudo Caracteres Imprimiveis";
	printf ("%d\n", ft_str_is_printable (test));
	printf ("%s", test);
	return (0);
}
*/