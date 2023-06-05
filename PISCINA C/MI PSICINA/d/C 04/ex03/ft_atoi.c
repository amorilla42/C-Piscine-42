/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorilla <amorilla@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 16:11:28 by amorilla          #+#    #+#             */
/*   Updated: 2022/02/24 13:25:34 by amorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	espreguntaespacios(char a)
{
	return (a == ' ' || a == '\t' || a == '\n'
		|| a == '\v' || a == '\f' || a == '\r');
}

int	ft_atoi(char *str)
{
	int	i;
	int	neg;
	int	result;

	result = 0;
	neg = 1;
	i = 0;
	while (espreguntaespacios(str[i]))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += (str[i] - '0');
		i++;
	}
	return (result * neg);
}
/*
int main(){

	int a;
	a = ft_atoi("   ------+-+-+-+-++---+-+-+1234567890");
	printf("%d",a);

	return 0;
}*/
