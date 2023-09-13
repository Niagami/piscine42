/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteste <jteste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:17:10 by jteste            #+#    #+#             */
/*   Updated: 2023/09/12 19:41:45 by jteste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *tab)
{
	int	i;

	i = 0;
	while (tab[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *str)
{
	char	*dest;
	int		i;

	i = 0;
	while (str[i])
		i++;
	dest = malloc(sizeof(char) * (i + 1));
	i = 0;
	if (!(dest))
		return (NULL);
	while (str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)

#include <stdio.h>
int main()
{	
	char tab[] = "batman";
	printf("%d\n",ft_strlen(tab));
	return 0;
}