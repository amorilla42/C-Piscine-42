/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falarcon <falarcon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 18:31:24 by falarcon          #+#    #+#             */
/*   Updated: 2022/03/02 17:39:51 by amorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power < 0 || nb == 0)
		return (0);
	else if (power == 1)
		return (nb);
	else
		return (nb * ft_recursive_power(nb, power -1));
}

int	main(void)
{
							printf("%d\n", ft_recursive_power(5,10));
					}

