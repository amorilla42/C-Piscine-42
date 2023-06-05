/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorilla <amorilla@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 17:42:32 by amorilla          #+#    #+#             */
/*   Updated: 2022/02/17 18:06:34 by amorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	isprintasa(char a)
{
	if ((a >= ' ' && a <= '~'))
		return (1);
	else
		return (0);
}

int	ft_str_is_printable(char *str)
{
	int	res;
	int	i;

	res = 1;
	i = 0;
	if (str[0] != '\0')
	{
		while (str[i] != '\0' && res == 1)
		{
			if (isprintasa(str[i]) == 0)
				res = 0;
			i++;
		}
	}
	return (res);
}

/*
int main(){

    printf("%d",ft_str_is_printable("abscddfsdfs"));
    printf("%d",ft_str_is_printable("AAAASDFDSSSFG"));
    printf("%d",ft_str_is_printable("asdgsd\ngsdgsdfASWA"));
    printf("%d",ft_str_is_printable("1242141"));
    printf("%d",ft_str_is_printable(""));
    return 0;
}
*/
