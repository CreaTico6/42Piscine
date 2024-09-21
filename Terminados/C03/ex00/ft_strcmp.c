/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnuno-mo <tnuno-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 23:09:26 by tnuno-mo          #+#    #+#             */
/*   Updated: 2024/09/14 16:02:23 by tnuno-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
#include <string.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	if (argc > 1)
	{
	printf ("%d\n", strcmp (argv[1], argv[2]));
	printf ("%d\n", ft_strcmp (argv[1], argv[2]));
	}
	return (0);
}
*/