/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwikholm <cwikholm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 17:02:39 by cwikholm          #+#    #+#             */
/*   Updated: 2022/02/28 17:51:55 by amorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	uppercase(int w, char *ptr)
{
	if (w == 0)
		*ptr = *ptr -32;
	w = w + 1;
	return (w);
}

int	lowercase(int w, char *ptr)
{
	if (w > 0)
		*ptr = *ptr +32;
	w = w + 1;
	return (w);
}

char	*ft_strcapitalize(char *str)
{
	int	count;
	int	word;

	count = 0;
	while (str[count] != '\0')
	{
		if ((str[count] >= '0') && (str[count] <= '9'))
			word++;
		else if ((str[count] >= 'a') && (str[count] <= 'z'))
		{
			word = uppercase (word, &str[count]);
		}
		else if (str[count] >= 'A' && str[count] <= 'Z')
		{
			word = lowercase (word, &str[count]);
		}	
		else
			word = 0;
		count++;
	}
	return (str);
}
#include <stdio.h>

int main(void)
{
	char str[] = "salut, comment tu vas ? 42mots quaRante-deux; 'cinquante+et+un";
	printf("%s\n", ft_strcapitalize(str));
	return (0);
}
