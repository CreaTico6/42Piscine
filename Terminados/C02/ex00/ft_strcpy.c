/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnuno-mo <tnuno-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 21:11:55 by tnuno-mo          #+#    #+#             */
/*   Updated: 2024/09/10 17:41:42 by tnuno-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src) //copies string
{
	char	*ini;

	ini = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ini);
}
/*
#include <stdio.h>

int	main(void)
{
	char	src[] = "This will overlay";
	char	dest[] = "and this will be deleted";

	printf ("%s\n", src);
	printf ("%s\n\n", dest);
	char *res = ft_strcpy (dest, src);
	printf ("Result:\n%s\n", res);
	return (0);
}
*/