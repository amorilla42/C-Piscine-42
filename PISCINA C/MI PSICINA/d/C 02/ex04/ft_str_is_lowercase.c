/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorilla <amorilla@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:26:40 by amorilla          #+#    #+#             */
/*   Updated: 2022/02/17 16:41:43 by amorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	islow(char a)
{
	if ((a >= 'a' && a <= 'z'))
		return (1);
	else
		return (0);
}

int	ft_str_is_lowercase(char *str)
{
	int	res;
	int	i;

	res = 1;
	i = 0;
	if (str[0] != '\0')
	{
		while (str[i] != '\0' && res == 1)
		{
			if (islow(str[i]) == 0)
				res = 0;
			i++;
		}
	}
	return (res);
}
/*
int main(){

    printf("%d",ft_str_is_lowercase("abscddfsdfs"));
    printf("%d",ft_str_is_lowercase("adsfasfd2asdfas"));
    printf("%d",ft_str_is_lowercase("asdgsdgsdgsdfASWA"));
    printf("%d",ft_str_is_lowercase("1242141"));
    printf("%d",ft_str_is_lowercase(""));
    return 0;
}
*/
