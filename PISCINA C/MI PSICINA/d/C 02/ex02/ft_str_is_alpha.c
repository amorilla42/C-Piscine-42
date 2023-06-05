/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorilla <amorilla@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 15:03:56 by amorilla          #+#    #+#             */
/*   Updated: 2022/02/17 16:07:54 by amorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	isalfa(char a)
{
	if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
		return (1);
	else
		return (0);
}

int	ft_str_is_alpha(char *str)
{
	int	res;
	int	i;

	res = 1;
	i = 0;
	if (str[0] != '\0')
	{
		while (str[i] != '\0' && res == 1)
		{
			if (isalfa(str[i]) == 0)
				res = 0;
			i++;
		}
	}
	return (res);
}
/*
int main(){
	
	printf("%d",ft_str_is_alpha("abscddfsdfs"));
	printf("%d",ft_str_is_alpha("adsfasfd2asdfas"));
	printf("%d",ft_str_is_alpha("asdgsdgsdgsdfASWA"));
	printf("%d",ft_str_is_alpha("1242141"));
	printf("%d",ft_str_is_alpha(""));
	return 0;
}
*/
