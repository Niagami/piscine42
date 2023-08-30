
#include <unistd.h>

void	ft_print_combn(int nb);
void	ft_putchar(char a);
void	ft_calcule(char tab[], int nb);
void	ft_print_combn(int nb);
{
	char	tab[9];
	char	a;
	int place_tab;

	place_tab = 0;
	a = '0';
	while (place_tab <= 9 || place_tab == nb - 1)
	{
		tab[place_tab] = a;
		a++;
		place_tab++;
	}
	ft_calcule(tab[], nb);
}

void	ft_putchar(char a)
{
				write (1, &c, 1);
}


void	ft_calcule(char tab[], int nb)
{
	
}
