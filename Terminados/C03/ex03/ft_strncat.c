/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnuno-mo <tnuno-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 18:12:25 by tnuno-mo          #+#    #+#             */
/*   Updated: 2024/09/17 17:29:04 by tnuno-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	size;
	unsigned int	i;

	size = 0;
	while (dest[size] != '\0')
		size++;
	i = 0;
	while (src[i] != '\0' && (i < nb))
	{
		dest[size + i] = src[i];
		i++;
	}
	dest[size + i] = '\0';
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>

int main(void)
{
	char test_d[30] = "This is the destination"; 
    char *test_s = "This is the origin";

    char test_d2[30] = "This is the destination";
    char *test_s2 = "This is the origin";
	
	printf ("%s\n", strncat (test_d, test_s, 10));
	printf ("%s\n", ft_strncat (test_d2, test_s2, 10));

	return (0);
}
*/