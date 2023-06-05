/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javirodr <javirodr@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 23:59:36 by javirodr          #+#    #+#             */
/*   Updated: 2022/02/28 20:05:14 by amorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_fun(char *str, int a)
{
	if (str[a - 1] >= 32 && str[a - 1] <= 47)
		str[a] -= 32;
	else if (str[a - 1] >= 58 && str[a - 1] <= 64)
		str[a] -= 32;
	else if (str[a - 1] >= 91 && str[a - 1] <= 96)
		str[a] -= 32;
	else if (str[a - 1] >= 123 && str[a - 1] <= 126)
		str[a] -= 32;
	else if (str[a - 1] == '\0')
		str[a] -= 32;
	a++;
}

char	*ft_strcapitalize(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] >= 'a' && str[a] <= 'z')
			ft_fun(str, a);
		if (str[a] >= 'A' && str[a] <= 'Z')
		{
			if (str[a - 1] >= 'a' && str[a - 1] <= 'z')
				str[a] += 32;
			else if (str[a - 1] >= 'A' && str[a - 1])
				str[a] += 32;
		}
		a++;
	}
	return (str);
}

#include<stdio.h>

int main()
{
	char a[]="aa aaa fff fff";
printf("%s",ft_strcapitalize(a));

}


