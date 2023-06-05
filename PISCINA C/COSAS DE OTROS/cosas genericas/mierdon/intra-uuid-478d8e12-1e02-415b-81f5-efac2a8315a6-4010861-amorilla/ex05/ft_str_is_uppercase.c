/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorilla <amorilla@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:37:05 by amorilla          #+#    #+#             */
/*   Updated: 2022/02/17 17:47:13 by amorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	isuppera(char a)
{
	if ((a >= 'A' && a <= 'Z'))
		return (1);
	else
		return (0);
}

int	ft_str_is_uppercase(char *str)
{
	int	res;
	int	i;

	res = 1;
	i = 0;
	if (str[0] != '\0')
	{
		while (str[i] != '\0' && res == 1)
		{
			if (isuppera(str[i]) == 0)
				res = 0;
			i++;
		}
	}
	return (res);
}

/*
int main(){

    printf("%d",ft_str_is_uppercase("abscddfsdfs"));
    printf("%d",ft_str_is_uppercase("AAAASDFDSSSFG"));
    printf("%d",ft_str_is_uppercase("asdgsdgsdgsdfASWA"));
    printf("%d",ft_str_is_uppercase("1242141"));
    printf("%d",ft_str_is_uppercase(""));
    return 0;
}
*/
