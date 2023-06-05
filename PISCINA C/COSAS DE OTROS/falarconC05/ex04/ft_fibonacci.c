/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falarcon <falarcon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 18:41:36 by falarcon          #+#    #+#             */
/*   Updated: 2022/03/02 17:41:01 by amorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if ((index == 1) || (index == 2))
		return (1);
	else
		return (ft_fibonacci(index -2) + ft_fibonacci(index -1));
}

int	main(void)
{
	printf("%d\n", ft_fibonacci(3));
}
