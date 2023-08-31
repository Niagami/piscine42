/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteste <jteste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:51:16 by jteste            #+#    #+#             */
/*   Updated: 2023/08/30 15:15:54 by jteste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	if (i == n)
	{
		return (0);
	}
	return (s1[i] - s2[i]);
}

/* 
#include <stdio.h>
int	main()
{
	char	s1[] = "batman ls real";
	char	s2[] = "batman is real";
	unsigned int a;
	a = 5;
	ft_strncmp(s1, s2, a);
	printf("%d\n", ft_strncmp(s1, s2, a));
	return 0;
}
*/
