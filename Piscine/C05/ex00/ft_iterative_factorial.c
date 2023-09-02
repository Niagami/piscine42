/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteste <jteste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 14:30:10 by jteste            #+#    #+#             */
/*   Updated: 2023/09/02 15:07:34 by jteste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_factorial(int nb)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	if (nb < 0)
	{
		return (0);
	}
	else
	{
		while (i <= nb)
		{
		j = j * i;
		i ++;
		}
		return (j);
	}
}

#include <stdio.h>
int main()
{
	int a;
	a = 8;
	printf("%d\n",ft_iterative_factorial(a));
	return 0;
}