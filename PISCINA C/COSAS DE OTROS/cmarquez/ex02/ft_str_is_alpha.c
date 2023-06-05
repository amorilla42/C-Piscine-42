/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarquez <cmarquez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 11:10:17 by cmarquez          #+#    #+#             */
/*   Updated: 2022/02/22 14:28:39 by cmarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
//#include<string.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
			i++;
		else
			return (0);
	}
	return (1);
}
/*int main()
{
	char hola[] = "viva 42";
	char adios[] = "vivacuarentaydos";
	char vacio[] = "";
	
	printf("%d\n", ft_str_is_alpha(hola));
	printf("%d\n", ft_str_is_alpha(adios));
	printf("%d\n", ft_str_is_alpha(vacio));
}*/
