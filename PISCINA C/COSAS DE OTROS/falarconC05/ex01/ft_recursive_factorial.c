/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falarcon <falarcon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 13:05:34 by falarcon          #+#    #+#             */
/*   Updated: 2022/03/02 17:34:41 by amorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int nb2;

	if (nb == 0)
		return (1);
	else if (nb > 0){
		nb2=nb-1;	
		nb = nb * ft_recursive_factorial(nb2);}
	else
		return (0);
	return (nb);
}

int main()
{
	printf("%d\n", ft_recursive_factorial(5));
}

