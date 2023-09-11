/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteste <jteste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 16:04:07 by jteste            #+#    #+#             */
/*   Updated: 2023/09/11 09:48:56 by jteste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < (size - i - 1))
		{
			if (tab[j] > tab[j + 1])
			{
				ft_swap(&tab[j], &tab[j + 1]);
			}
			j++;
		}
		i++;
	}
}
/*
#include <stdio.h>
int main()
{
	
	int tab[] = {4, 5, 2, 7, 12, 54, 42, 1, 0};
	int size = 9;
	int i = 0;

	printf("AVANT : \n");
	while (i < size)
	{
	    printf("%d ", tab[i]);
	    i++;
	}
	printf("\n");

	ft_sort_int_tab(tab, size);

	printf("APRES : \n");
	i = 0;
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	return 0;
}
*/
