/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jverea-a <jverea-a@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 12:05:11 by jverea-a          #+#    #+#             */
/*   Updated: 2022/03/01 17:06:01 by jverea-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power > 1)
		return (nb * ft_recursive_power(nb, power - 1));
	return (nb);
}

/*#include <stdio.h>
int main()
{
	int nb = 0;
	int power = 0;

	nb = ft_recursive_power(nb, power);
	printf("%d", nb);
}*/
