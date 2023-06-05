/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falarcon <falarcon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 10:18:53 by falarcon          #+#    #+#             */
/*   Updated: 2022/03/02 17:28:27 by amorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	while (nb != 0){
		i = i * nb;
		nb--;}
	return (i);
}

int main(void)
{
	printf("%d\n", ft_iterative_factorial(4));
	return 														0;
}

