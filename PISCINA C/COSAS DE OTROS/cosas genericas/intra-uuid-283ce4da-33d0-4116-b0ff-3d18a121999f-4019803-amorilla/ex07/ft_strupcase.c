/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorilla <amorilla@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 18:00:43 by amorilla          #+#    #+#             */
/*   Updated: 2022/02/17 18:22:31 by amorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	if (str[0] != '\0')
	{
		while (str[i] != '\0')
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
			i++;
		}
	}
	return (str);
}

/*
int main(){
	
	char a[]="aloha mi amigo AAAA32";
    printf("%s",ft_strupcase(a));
    return 0;
}
*/
