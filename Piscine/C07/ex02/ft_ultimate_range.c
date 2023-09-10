/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteste <jteste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 15:54:55 by jteste            #+#    #+#             */
/*   Updated: 2023/09/10 11:46:39 by jteste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	i;
	int	j;

	j = max - min;
	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	tab = malloc(sizeof(int) * j);
	if (tab == NULL)
		return (-1);
	else
	{
		while (i < j)
		{
			tab[i] = min + i;
			i++;
		}
		return (i);
	}
}

#include <stdio.h>
int main()
{ 
	int *result;
	int size;
	int min = -10;
	int max = 20;

	size = ft_ultimate_range(&result, min, max);
	printf("Taille du tableau = %d\n", size);
    return 0;
}
 