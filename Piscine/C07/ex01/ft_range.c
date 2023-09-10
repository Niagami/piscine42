/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteste <jteste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 13:52:23 by jteste            #+#    #+#             */
/*   Updated: 2023/09/09 11:32:33 by jteste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;
	int	j;

	i = 0;
	j = max - min;
	if (min >= max)
	{
		return (NULL);
	}
	tab = malloc(sizeof(int) * j);
	if (!tab)
	{
		return (NULL);
	}
	while (min < max)
	{
		tab[i] = min;
		min ++;
		i ++;
	}
	return (tab);
}
/*
#include <stdio.h>
int main(void)
{
	int i = 0;
	int min = 0;
	int max = 20;
	int *resultat = ft_range(min,max);
	while (i < max - min)
	{
		printf("%d\n",resultat[i]);
		i++;
	}
	return 0;
}
*/