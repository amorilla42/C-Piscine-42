/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-g <amunoz-g@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 12:55:20 by amunoz-g          #+#    #+#             */
/*   Updated: 2022/02/16 13:28:13 by amunoz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_putstr(char *str)
{
	int	contador;

	contador = 0;
	while (str[contador] != '\0')
	{
		write(1, &str[contador], 1);
		contador++;
	}
}
/*
int	main(void)
{
	char *str;

	str = "norminette";
	ft_putstr(str);
}
*/
