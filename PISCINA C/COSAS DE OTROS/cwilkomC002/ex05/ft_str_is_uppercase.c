/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwikholm <cwikholm@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 14:39:06 by cwikholm          #+#    #+#             */
/*   Updated: 2022/02/28 17:41:43 by amorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (*str < 'A' || *str > 'Z')
		{
			return (0);
		}
	str++;
	}
	return (1);
}
#include <stdio.h>
int main(void)
{
	char str[] = "sdfsf";
	printf("%d\n", ft_str_is_uppercase(str));
	return (0);
}
