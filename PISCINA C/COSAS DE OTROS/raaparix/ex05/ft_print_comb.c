/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaparic <raaparic@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 14:17:58 by raaparic          #+#    #+#             */
/*   Updated: 2022/02/21 23:02:36 by raaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_number(char num1, char num2, char num3);

void	ft_print_comb(void)
{
	char	num1;
	char	num2;
	char	num3;

	num1 = '0';
	num2 = '1';
	num3 = '2';
	while (num1 <= '6')
	{
		while (num2 <= '8')
		{
			while (num3 <= '9')
			{
				if (num3 > num2 && num2 > num1)
					ft_number(num1, num2, num3);
				num3++;
			}
			num3 = num2 + 1;
			num2++;
		}
		num2 = num1 + 1;
		num1++;
	}
	write (1, "789", 3);
}	

void	ft_number(char num1, char num2, char num3)
{
	write (1, &num1, 1);
	write (1, &num2, 1);
	write (1, &num3, 1);
	write (1, ",", 1);
	write (1, " ", 1);
}

/*int	main()
{
	ft_print_comb();
}*/	
