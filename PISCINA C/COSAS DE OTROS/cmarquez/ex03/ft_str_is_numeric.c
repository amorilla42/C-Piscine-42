/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarquez <cmarquez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 11:50:52 by cmarquez          #+#    #+#             */
/*   Updated: 2022/02/22 14:41:29 by cmarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
//#include<string.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
			return (0);
	}
	return (1);
}
/*int main()
{
	char hola[] = "";
	char adios[] = "hola";
	char num[] = "123456789";

	printf("%d\n", ft_str_is_numeric(hola));
	printf("%d\n", ft_str_is_numeric(adios));
	printf("%d\n", ft_str_is_numeric(num));
}*/
