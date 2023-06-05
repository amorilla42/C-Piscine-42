/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonza <crigonza@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 12:48:18 by crigonza          #+#    #+#             */
/*   Updated: 2022/02/28 10:20:58 by crigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while (i <= (nb / 2) && i < 46341)
	{
		if (i * i == nb)
			return (i);
		i ++;
	}
	return (0);
}

/*#include<stdio.h>

int main(void)
{
    int x;
    x = ft_sqrt(2147483647);
	printf("%d\n",x);
    return(0);
}*/
