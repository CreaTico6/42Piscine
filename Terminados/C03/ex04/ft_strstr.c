/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnuno-mo <tnuno-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 19:06:19 by tnuno-mo          #+#    #+#             */
/*   Updated: 2024/09/17 12:02:49 by tnuno-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return (str + i);
		i++;
		j = 0;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    char *h1 = "This is a very nice sample string.";
    char *n1 = "sample";

    char *h2 = "Howdy people, wassup?";
    char *n2 = "people";

    char *h3 = "Empty ToFind";
    char *n3 = "";

    char *h4 = "Not here!";
    char *n4 = "absent";

    // Test and print results
    printf ("%s\n",ft_strstr(h1, n1));
    printf ("%s\n",strstr(h1, n1));
    printf ("%s\n",ft_strstr(h2, n2));
    printf ("%s\n",strstr(h2, n2));
    printf ("%s\n",ft_strstr(h3, n3));
    printf ("%s\n",strstr(h3, n3));
    printf ("%s\n",ft_strstr(h4, n4));
    printf ("%s\n",strstr(h4, n4));

    return 0;
}
*/