/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarquez <cmarquez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 10:37:16 by cmarquez          #+#    #+#             */
/*   Updated: 2022/02/22 17:38:38 by amorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	primero;

	primero = 0;
	i = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (primero == 0)
				str[i] = str[i] - 32;
			primero = -1;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			primero = -1;
		else
			primero = 0;
		i++;
	}
	return (str);
}
int	main(void)
{
	char	hi[]= "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	ft_strcapitalize(hi);
	printf("%s\n", hi);
}
