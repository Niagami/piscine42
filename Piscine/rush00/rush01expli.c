/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01expli.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteste <jteste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 11:22:18 by jteste            #+#    #+#             */
/*   Updated: 2023/08/27 13:22:56 by jteste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	firstline(x)
{
	int	i;

	i = 0;
	while (i < x) /* tant que i est inferieur a la largeur */
	{
		if (i == 0) /* si c'est le premier caractere de la ligne */
			ft_putchar('/');
		else if (i == x - 1) /* si c'est le dernier caractere de la ligne */
			ft_putchar('\\');
		else
			ft_putchar('*'); /* si non c'est entre les deux */
		i++; 
	}
}

void	midline(x)
{
	int	i;

	i = 0;
	while (i < x) /* tant que i est inferieur a la largeur */
	{
		if (i == 0 || i == x - 1) /* si c'est le premier ou le dernier caractere de la ligne */
			ft_putchar('*'); 
		else /* si non c'est entre les deux */
			ft_putchar(' '); 
		i++;
	}
}

void	lastline(x)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (i == 0) /* si c'est le premier caractere de la ligne */
			ft_putchar('\\');
		else if (i == x - 1) /* si c'est le dernier caractere de la ligne */
			ft_putchar('/');
		else /* si non c'est entre les deux */
			ft_putchar('*');
		i++;
	}
}

void	rush(int x, int y)
{
	int	i;

	i = 1;
	if (x > 0 || y > 0) /* evite les cas impossibles */
	{
		firstline(x);
		ft_putchar('\n');
		while (i < y - 1)  /* tant que on est pas sur la derniere ligne */
		{
			midline(x);
			ft_putchar('\n');
			l++;
		}
		if (y > 1) /* ne met une derniere ligne que si besoin */
		{
			lastline(x);
			ft_putchar('\n');
		}
	}
}

int	main(void)
{
	rush(10, 4);
	return (0);
}