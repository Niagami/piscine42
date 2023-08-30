/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteste <jteste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 07:01:19 by mlapique          #+#    #+#             */
/*   Updated: 2023/08/24 16:59:13 by jteste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr2(int nb, char *t, int nbchiffre, int negatif);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	display(char *t, int nbchiffre, int negatif)
{
	if (negatif)
		write(1, "-", 1);
	while (nbchiffre >= 0)
	{
		ft_putchar('0' + t[nbchiffre]);
		nbchiffre--;
	}
}

void	ft_putnbr(int nb)
{
	int		nbchiffre;
	int		negatif;
	char	tab[10];

	nbchiffre = 0;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	if (nb < 0)
	{
		negatif = 1;
		nb = nb * -1;
	}
	else
		negatif = 0;
	ft_putnbr2(nb, tab, nbchiffre, negatif);
}

void	ft_putnbr2(int nb, char *t, int nbchiffre, int negatif)
{
	while (nb != 0)
	{
		t[nbchiffre++] = nb % 10;
		nb /= 10;
	}
	display(t, nbchiffre - 1, negatif);
}

int main()
{
	int nb=-787878;
	ft_putnbr(nb);
	return(0);
}
