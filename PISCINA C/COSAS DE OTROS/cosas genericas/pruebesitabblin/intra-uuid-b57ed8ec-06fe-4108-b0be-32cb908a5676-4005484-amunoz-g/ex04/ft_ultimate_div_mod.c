/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-g <amunoz-g@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 20:16:33 by amunoz-g          #+#    #+#             */
/*   Updated: 2022/02/16 18:40:16 by amunoz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	resto;

	div = *a / *b;
	resto = *a % *b;
	*a = div;
	*b = resto;
}
/*
int	main(void)
{
	int	a;
	int	b;
	int	*c;
	int	*d;

	a = 12;
	b = 5;
	c = &a;
	d = &b;
	ft_ultimate_div_mod(c, d);
	printf("%d y %d", a, b);
}
*/
