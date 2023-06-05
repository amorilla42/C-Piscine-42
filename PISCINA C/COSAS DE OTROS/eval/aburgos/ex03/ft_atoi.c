/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburgos- <aburgos-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 23:13:50 by aburgos-          #+#    #+#             */
/*   Updated: 2022/02/22 16:44:32 by amorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_whitespace(char *str, int *pt_i)
{
	int	i;
	int	count;

	i = 0;
	count = 1;
	while (((str[i]) && (str[i] >= 9 && str[i] <= 13)) || (str[i] == 32))
		i++;
	while ((str[i]) && (str[i] == 43 || str[i] == 45))
	{	
		if (str[i] == 45)
			count *= -1;
		i++;
	}
	*pt_i = i;
	return (count);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	result = 0;
	sign = ft_whitespace(str, &i);
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	result *= sign;
	return (result);
}

#include <stdio.h>

int	main(void)
{
	char *ej =  " ---+--+1234ab567";
	printf("%d", ft_atoi(ej));
} 
