/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-g <amunoz-g@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 15:38:55 by amunoz-g          #+#    #+#             */
/*   Updated: 2022/02/16 18:41:26 by amunoz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	contador;
	int	c_inverso;
	int	aux;

	contador = 0;
	c_inverso = size -1;
	while (contador < (size / 2))
	{
		aux = tab[contador];
		tab[contador] = tab[c_inverso];
		tab[c_inverso] = aux;
		contador++;
		c_inverso--;
	}
}

/*
int	main(void)
{
	int contador;
	int	tab[3];
	tab[0] = 0;
	tab[1] = 1;
	tab[2] = 2;
	char c;

	contador = 0;
	ft_rev_int_tab(tab, 3);
	while (tab[contador] >= '\0')
	{
		c = tab[contador] + '0';
		write(1,&c,1);
		contador++;
	}
}
*/
