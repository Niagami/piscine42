/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteste <jteste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 10:58:58 by jteste            #+#    #+#             */
/*   Updated: 2023/08/28 13:59:22 by jteste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	debut;
	int	fin;
	int	i;

	debut = 0;
	fin = size - 1;
	while (debut < fin)
	{
		i = tab[debut];
		tab[debut] = tab[fin];
		tab[fin] = i;
		debut ++;
		fin --;
	}
}
