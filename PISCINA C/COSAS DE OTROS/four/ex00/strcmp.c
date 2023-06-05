/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efournou <efournou@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 11:15:28 by efournou          #+#    #+#             */
/*   Updated: 2022/02/22 18:32:25 by amorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	counter;

	counter = 0;
	while (s1[counter] == s2[counter] && s1[counter] != '\0'
		&& s2[counter] != '\0')
	{
		counter++;
	}
	if (s1[counter] == 0 && s2[counter] == 0)
		return (0);
	if (s1[counter] > s2[counter])
		return ((int)s1[counter] - s2[counter]);
	return ((int) -(s2[counter] - s1[counter]));
}

int	main()
{
	char s1_0[10] = "Hello";
	char s2_0[10] = "Hello";
	printf("s1 = Hello, s2 = Hello, strcmp = %i, ft_strcmp = %i\n", 
	strcmp(s1_0, s2_0), ft_strcmp(s1_0, s2_0));
	
	char s1_1[10] = "Helloa";
	char s2_1[10] = "HelloBro";
	printf("s1 = HelloBro, s2 = Hello\n, strcmp = %i, ft_strcmp = %i\n", 
	strcmp(s1_1, s2_1), ft_strcmp(s1_1, s2_1));
	
	char s1_2[10] = "Hellg";
	char s2_2[10] = "Helldro";
	printf("s1 = Hello, s2 = HellBro, strcmp = %i, ft_strcmp = %i\n", 
	strcmp(s1_2, s2_2), ft_strcmp(s1_2, s2_2));
}

