/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorilla <amorilla@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 17:57:36 by amorilla          #+#    #+#             */
/*   Updated: 2022/03/02 12:01:24 by amorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int arc, char **args)
{
	int	i;

	(void)arc;
	i = 0;
	while (args[0][i] != '\0')
	{
		ft_putchar(args[0][i]);
		i++;
	}
	ft_putchar('\n');
	return (0);
}
