/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteste <jteste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 10:42:53 by jteste            #+#    #+#             */
/*   Updated: 2023/09/11 11:25:37 by jteste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_is_prime(int nb)
{
	int	i;
	int	prime;

	i = 2;
	prime = 0;
	if (nb < 2)
		return (0);
	if (nb == i)
		return (1);
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			prime++;
		i++;
	}
	if (prime == 0)
		return (1);
	else
		return (0);
}

/*
#include <stdio.h>
int main()
{
	int nb;
	nb = 11;
	if(ft_is_prime(nb) == 1)
		printf("nb est un nombre premier\n");
	if(ft_is_prime(nb) == 0)
		printf("nb n'est pas un nombre premier\n");
	return 0;
}
*/