/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteste <jteste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 16:26:25 by jteste            #+#    #+#             */
/*   Updated: 2023/08/31 11:24:09 by jteste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_compare(char *str, char *to_find, int start)
{
	int	i;

	i = 0;
	while (to_find[i] != '\0')
	{
		if (str[start + i] != to_find[i])
		{
			return (0);
		}
		i++;
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_compare(str, to_find, i) == 1)
		{
			return (str + i);
		}
		i++;
	}
	return (0);
}
/*#include <stdio.h>
int main()
{
	char str[]="batman is real";
	char to_find[]="is";
	printf("%s\n",ft_strstr(str,to_find));
	return 0;
}*/
