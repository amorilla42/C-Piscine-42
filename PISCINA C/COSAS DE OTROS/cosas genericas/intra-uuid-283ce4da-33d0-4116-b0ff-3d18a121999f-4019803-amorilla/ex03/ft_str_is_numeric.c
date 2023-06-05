/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorilla <amorilla@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:00:12 by amorilla          #+#    #+#             */
/*   Updated: 2022/02/17 18:29:15 by amorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	isnum(char a)
{
	if ((a >= '0' && a <= '9'))
		return (1);
	else
		return (0);
}

int	ft_str_is_numeric(char *str)
{
	int	res;
	int	i;

	res = 1;
	i = 0;
	if (str[0] != '\0')
	{
		while (str[i] != '\0' && res == 1)
		{
			if (isnum(str[i]) == 0)
				res = 0;
			i++;
		}
	}
	return (res);
}
/*
int main(){

    printf("%d",ft_str_is_numeric("abscddfsdfs"));
    printf("%d",ft_str_is_numeric("adsfasfd2asdfas"));
    printf("%d",ft_str_is_numeric("asdgsdgsdgsdfASWA"));
    printf("%d",ft_str_is_numeric("1242141"));
    printf("%d",ft_str_is_numeric(""));
    return 0;
}
*/
