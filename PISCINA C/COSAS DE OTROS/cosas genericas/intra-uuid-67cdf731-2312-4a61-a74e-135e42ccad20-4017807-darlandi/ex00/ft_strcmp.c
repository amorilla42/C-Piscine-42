/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darlandi <darlandi@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 17:55:41 by darlandi          #+#    #+#             */
/*   Updated: 2022/02/19 17:03:40 by amorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && s1[i])
		i++;
	return (s1[i] - s2[i]);
}

int main (void)
{
	char *a = "hola";
	char *b = "hxla";
	int res = ft_strcmp(a, b);
	printf("%d", res);

}
