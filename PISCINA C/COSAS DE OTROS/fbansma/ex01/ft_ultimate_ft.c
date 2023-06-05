/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbasma <fbasma@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 14:56:38 by fbasma            #+#    #+#             */
/*   Updated: 2022/02/24 19:43:58 by amorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int	main(void)
{
	int	a;
	int	*nbr;
	int	**nbr2;
	int	***nbr3;
	int	****nbr4;
	int	*****nbr5;
	int	******nbr6;
	int	*******nbr7;
	int	********nbr8;
	int	*********nbr9;

	a = 0;
	nbr = &a;
	nbr2 = &nbr;
	nbr3 = &nbr2;
	nbr4 = &nbr3;
	nbr5 = &nbr4;
	nbr6 = &nbr5;
	nbr7 = &nbr6;
	nbr8 = &nbr7;
	nbr9 = &nbr8;
	ft_ultimate_ft(nbr9);
	printf("%d", a);
	return (0);
}
