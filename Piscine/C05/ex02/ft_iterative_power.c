/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteste <jteste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 15:33:11 by jteste            #+#    #+#             */
/*   Updated: 2023/09/04 16:34:05 by jteste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	resultat;

	i = 0;
	resultat = 1;
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	while (i < power)
	{
		resultat = resultat * nb;
		i++;
	}
	return (resultat);
}
/*
#include <stdio.h>

int	main(void)
{
	int	nb;
	int	power;

	nb = 12;
	power = 2;
	printf("%d\n", ft_iterative_power(nb, power));
	return (0);
}
*/
