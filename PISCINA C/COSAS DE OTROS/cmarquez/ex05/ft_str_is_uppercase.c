/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarquez <cmarquez@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 18:58:09 by cmarquez          #+#    #+#             */
/*   Updated: 2022/02/22 14:48:06 by cmarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
//#include<string.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			i++;
		else
			return (0);
	}
	return (1);
}

/*int main (void)
{
	char mayus[] = "HELLOWORLD";
	char others[] = "helloworld42";
	char nothing[] = "";

	printf("%d\n", ft_str_is_uppercase(mayus));
	printf("%d\n", ft_str_is_uppercase(others));
	printf("%d\n", ft_str_is_uppercase(nothing));
}*/
