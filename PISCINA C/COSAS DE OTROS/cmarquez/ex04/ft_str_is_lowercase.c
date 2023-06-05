/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarquez <cmarquez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 18:40:21 by cmarquez          #+#    #+#             */
/*   Updated: 2022/02/22 14:45:29 by cmarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
//#include<string.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
				i++;
		else
			return (0);
	}
	return (1);
}

/*int main (void)
{
	char hola[] = "Viva 42";
	char adios[] = "vivacuarentaydos";
	char vacio[] = "";

	printf("%d\n", ft_str_is_lowercase(hola));
	printf("%d\n", ft_str_is_lowercase(adios));
	printf("%d\n", ft_str_is_lowercase(vacio));
}*/
