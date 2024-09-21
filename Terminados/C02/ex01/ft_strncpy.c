/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnuno-mo <tnuno-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 14:44:19 by tnuno-mo          #+#    #+#             */
/*   Updated: 2024/09/14 13:24:20 by tnuno-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	src[] = "Smaller!";
	char	dest[] = "This is bigger!";
	int	n = 16;

	printf ("%s\n", src);
	printf ("%s\n\n", dest);
	printf ("Original Func: %s\n", strncpy (dest, src, n));
	char *res = ft_strncpy (dest, src, n);
	
	printf ("MyFunc: %s\n", res);
	return (0);
}
*/
