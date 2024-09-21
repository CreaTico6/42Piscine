/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnuno-mo <tnuno-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 20:38:03 by tnuno-mo          #+#    #+#             */
/*   Updated: 2024/09/09 16:18:08 by tnuno-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str) // para "imprimir" a string
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
}

void	ft_putnbr(int l) // para "imprimir" ints
{
	char	c;

	if (l > 9)
		ft_putnbr(l / 10);
	c = (l % 10) + '0';
	write (1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
int	main(void)
{
	int	l;

	l = ft_strlen("Era uma vez ...");
	ft_putstr("A frase tem ");
	ft_putnbr(l);
	ft_putstr(" caracteres!\n");
	return (0);
}
*/
