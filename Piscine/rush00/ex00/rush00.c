/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteste <jteste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 14:07:35 by jteste            #+#    #+#             */
/*   Updated: 2023/08/27 14:26:15 by jteste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	firstline(int x)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (i == 0)
			ft_putchar('o');
		else if (i == x - 1)
			ft_putchar('o');
		else
			ft_putchar('-');
		i++;
	}
}

void	midline(int x)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (i == 0 || i == x - 1)
			ft_putchar('|');
		else
			ft_putchar(' ');
		i++;
	}
}

void	lastline(int x)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (i == 0)
			ft_putchar('o');
		else if (i == x - 1)
			ft_putchar('o');
		else
			ft_putchar('-');
		i++;
	}
}

void	rush(int x, int y)
{
	int	i;

	i = 1;
	if (x > 0 || y > 0)
	{
		firstline(x);
		ft_putchar('\n');
		while (i < y - 1)
		{
			midline(x);
			ft_putchar('\n');
			i++;
		}
		if (y > 1)
		{
			lastline(x);
			ft_putchar('\n');
		}
	}
}
