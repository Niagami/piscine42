/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteste <jteste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 09:59:14 by jteste            #+#    #+#             */
/*   Updated: 2023/09/04 16:34:06 by jteste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	else
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
}

/*
#include <stdio.h>

int	main(void)
{
	int	nb;
	int	power;

	nb = 10;
	power = 2;
	printf("%d\n", ft_recursive_power(nb, power));
	return (0);
}
*/
