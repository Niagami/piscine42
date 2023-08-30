7/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jteste <jteste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 13:59:15 by jteste            #+#    #+#             */
/*   Updated: 2023/08/29 15:47:52 by jteste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
			j = 0;
		if (str[i] == '+' || str[i] == '-')
			j = 0;
		if (str[i] >= '0' && str[i] <= '9')
			j = 1;
		if (str[i] >= 'A' && str[i] <= 'Z')
			j = 1;
		if (j == 0 && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
			j = 1;
		}
		i++;
	}
	return (str);
}
/* int main()
{
	char str[] = "salut, Comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("salut, Comment tu vas ? 42mots quarante-deux; cinquante+et+un\n");
	printf("%s\n",ft_strcapitalize(str));
	return (0);
} */
