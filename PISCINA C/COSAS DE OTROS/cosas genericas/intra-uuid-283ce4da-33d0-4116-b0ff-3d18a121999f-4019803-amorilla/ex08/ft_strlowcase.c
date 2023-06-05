/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorilla <amorilla@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 18:22:05 by amorilla          #+#    #+#             */
/*   Updated: 2022/02/17 18:26:16 by amorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	if (str[0] != '\0')
	{
		while (str[i] != '\0')
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
			i++;
		}
	}
	return (str);
}

/*
int main(){

    char a[]="aloha mi amigo AAAA32";
    printf("%s",ft_strlowcase(a));
    return 0;
}
*/
