/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-g <amunoz-g@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 17:45:41 by amunoz-g          #+#    #+#             */
/*   Updated: 2022/02/16 18:39:28 by amunoz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	aux;
	int	contador;

	contador = 0;
	while (contador < (size - 1))
	{
		if (tab[contador] > tab[contador + 1])
		{
			aux = tab[contador + 1];
			tab[contador + 1] = tab[contador];
			tab[contador] = aux;
			contador = 0;
		}
		else
		{
			contador++;
		}
	}
}
/*
int	main(void)
{
    int mcontador;
    int tab[4];
    tab[0] = 3;
    tab[1] = 7;
    tab[2] = 9;
	tab[3] = 3;
    char c;

    mcontador = 0;
    ft_sort_int_tab(tab, 4);
    while (tab[mcontador] >= '\0')
    {
        c = tab[mcontador] + '0';
        write(1,&c,1);
        mcontador++;
    }
	
}
*/
