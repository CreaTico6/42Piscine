/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnuno-mo <tnuno-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 13:41:53 by tnuno-mo          #+#    #+#             */
/*   Updated: 2024/09/14 16:34:51 by tnuno-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i] || s1[i] == '\0' || s2[i] == '\0')
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	if (argc > 1)
	{
	printf ("%d\n", strncmp (argv[1], argv[2], 6));
	printf ("%d\n", ft_strncmp (argv[1], argv[2], 6));
	}
	return (0);
}
*/