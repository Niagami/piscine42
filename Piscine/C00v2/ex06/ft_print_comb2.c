/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlapique <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 13:25:46 by mlapique          #+#    #+#             */
/*   Updated: 2023/08/23 13:30:26 by mlapique         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char a, char b, char c, char d);
void	ft_print_comb(void);
void	ft_calcule(char a, char b, char c, char d);

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = '0';
	b = '0';
	c = '0';
	d = '1';
	ft_calcule(a, b, c, d);
}

void	ft_calcule(char a, char b, char c, char d)
{	
	while (a <= '9')
	{
		while (b <= '8')
		{
			while (c <= '9')
			{
				while (d <= '9')
				{
					ft_print(a, b, c, d);
					d++;
				}
				d = '0';
				c++;
			}
			c = a;
			b++;
			d = b + 1;
		}
		a++;
		b = '0';
	}
}

void	ft_print(char a, char b, char c, char d)
{
	write(1, " ", 1);
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	write(1, ",", 1);
}
