/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorilla <amorilla@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 18:33:50 by amorilla          #+#    #+#             */
/*   Updated: 2022/02/17 19:30:58 by amorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	esprimeraletra(char *str, int i)
{
	if ((str[i - 1] >= 'a' && str[i - 1] <= 'z')
		|| (str[i - 1] >= '0' && str[i - 1] <= '9')
		|| (str[i - 1] >= 'A' && str[i - 1] <= 'Z'))
		return (0);
	else
		return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && esprimeraletra(str, i))
		{
			str[i] -= 32;
		}
		else if ((str[i] >= 'A' && str[i] <= 'Z') && (!esprimeraletra(str, i)))
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}
/*
int main(){
	char c[]="hola ErRes azul???+aWWa";
	printf("%s",ft_strcapitalize(c));
	return 0;
}
*/
