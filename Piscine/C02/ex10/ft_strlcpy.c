/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteste <jteste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:37:35 by jteste            #+#    #+#             */
/*   Updated: 2023/09/12 10:28:31 by jteste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (src[j] != '\0')
		j++;
	if (size < 1)
		return (j);
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (j);
}
/*
#include <stdio.h>
int main()
{
	char src[] = "Batman is real";
	char dst[20];
	int len = ft_strlcpy(dst, src, sizeof(dst));
	printf("copié dans dest : %s\n", dst);
	printf("Taille de la chaîne copiée : %d\n", len);

    return 0;
}
*/
