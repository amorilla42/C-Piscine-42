/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorilla <amorilla@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 19:34:27 by amorilla          #+#    #+#             */
/*   Updated: 2022/02/20 19:38:36 by amorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
//#include<string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	x;

	if (to_find[0] == '\0')
		return (str);
	while (*str)
	{
		if (*str == to_find[0])
		{
			i = 0;
			x = 0;
			while (to_find[i])
			{
				if (str[i] != to_find[i])
					x = 1;
				i++;
			}
			if (x == 0)
				return (str);
		}
		str++;
	}
	return (0);
}
/*
int main(void)
{
	char *a = "hola mundositobb mu hola";
	char *b = "mun";
	printf("%s", ft_strstr(a, b));
	return (0);
}
*/
