/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteste <jteste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 10:53:52 by jteste            #+#    #+#             */
/*   Updated: 2023/08/25 09:02:11 by jteste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_writing(char i, char j, char k, char l)
{
	write(1, " ", 1);
	write(1, &i, 1);
	write(1, &j, 1);
	write(1, " ", 1);
	write(1, &k, 1);
	write(1, &l, 1);
	write(1, ",", 1);
}

void	ft_print_comb2(void)
{
	char	i;
	char	j;
	char	k;
	char	l;

	i = '0';
	j = '0';
	k = '0';
	l = '1';
	while (i <= '9')
	{
		while (j <= '8')
		{
			while (k <= '9')
			{
				while (l <= '9')
				{
					ft_writing(i, j, k, l);
					l++;
				}
				l = '0';
				k++;
			}
			k = i;
			j++;
			
		}	
		i++;
	}
}
int main()
{
	ft_print_comb2();
	return 0;
}