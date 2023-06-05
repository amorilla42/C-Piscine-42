/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmoran-l <cmoran-l@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 15:16:00 by cmoran-l          #+#    #+#             */
/*   Updated: 2022/02/16 15:27:37 by amorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_start(char *ptr, int n);
void	ft_print(char *ptr, int n);
void	ft_onemore(char *ptr, int n);
int		ft_compcomb(char *ptr, int n);

void	ft_print_combn(int n)
{
	char	comb[10];
	char	*ptraux;
	int		posi;

	posi = 0;
	ptraux = &comb[0];
	while (posi < n)
	{
		*(ptraux + posi) = '0';
		posi++;
	}
	if (n > 0 && n < 10)
		ft_start(ptraux, n);
}

//
void	ft_start(char *ptr, int n)
{
	int	comp;

	comp = 0;
	while (*ptr <= ('0' + (10 - n)))
	{
		comp = ft_compcomb(ptr, n);
		if (comp == (n - 1))
		{
			if (*ptr == ('0' + (10 - n)) && *(ptr + (n - 1)) == '9')
				ft_print(ptr, n);
			else
			{
				ft_print(ptr, n);
				write(1, ", ", 2);
			}
		}
		comp = 0;
		ft_onemore(ptr, n);
	}
}

//compare each digit if it is minor than the next one
int	ft_compcomb(char *ptr, int n)
{
	int	posi;
	int	comp;

	posi = n - 1;
	comp = 0;
	while (posi > 0)
	{
		if (*(ptr + (posi - 1)) < *(ptr + posi))
			comp++;
		posi--;
	}
	return (comp);
}

//increment by +1 
void	ft_onemore(char *ptr, int n)
{
	int	posi;

	posi = n - 1;
	if (posi < 0)
	{
	}
	if (posi == 0)
		*(ptr + posi) += 1;
	else if (*(ptr + posi) < '9')
		*(ptr + posi) += 1;
	else
	{
		*(ptr + posi) = '0';
		ft_onemore(ptr, posi);
	}	
}

//print combination
void	ft_print(char *ptr, int n)
{
	write(1, ptr, n);
}


int	main(void)
{
	ft_print_combn(9);
}

