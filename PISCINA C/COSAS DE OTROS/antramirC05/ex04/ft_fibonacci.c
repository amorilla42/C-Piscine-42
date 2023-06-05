/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antramir <antramir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 16:13:57 by antramir          #+#    #+#             */
/*   Updated: 2022/02/24 17:04:50 by antramir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	if (index > 1)
		index = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (index);
}
/*
#include <stdio.h>

int	main(void)
{
	int	i;

	i = -2;
	while (i < 40)
	{
		printf("fibo de %d = %d\n", i, ft_fibonacci(i));
		i++;
	}
	return (0);
}
*/
