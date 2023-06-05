/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmoran-l <cmoran-l@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:26:31 by cmoran-l          #+#    #+#             */
/*   Updated: 2022/02/16 15:23:56 by amorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putnbr(int nb)
{	
		if (nb < 0)
		{
			write(1, "-", 1);
			nb *= -1;
			ft_putnbr(nb);
		}
		else if (nb == 0)
		{
			write(1, "0", 1);
		}
		else if (nb > 0)
		{
			if (nb >= 10)
				ft_putnbr(nb / 10);
			nb = (nb % 10) + '0';
			write(1, &nb, 1);
		}
	
}

int	main(void)
{
	ft_putnbr(-2147483648);
}
