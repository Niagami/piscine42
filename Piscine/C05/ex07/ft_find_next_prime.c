/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteste <jteste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 11:37:32 by jteste            #+#    #+#             */
/*   Updated: 2023/09/13 12:07:56 by jteste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

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

int	ft_find_next_prime(int nb)
{
	int	i;

	i = nb;
	if (i < 2)
	{
		return (2);
	}
	while (!ft_is_prime(i))
	{
		i++;
	}
	return (i);
}
/*
#include <stdio.h>
int main()
{
	int nb;
	nb = 10;
	printf("%d\n",ft_find_next_prime(nb));
	return 0;
}
*/
