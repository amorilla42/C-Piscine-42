/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efournou <efournou@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 11:15:28 by efournou          #+#    #+#             */
/*   Updated: 2022/02/22 18:34:20 by amorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	counter;

	counter = 0;
	while (s1[counter] == s2[counter] && s1[counter] != '\0'
		&& s2[counter] != '\0' && counter < n)
	{
		counter++;
	}
	if (s1[counter] == 0 && s2[counter] == 0)
		return (0);
	if (s1[counter] > s2[counter])
		return ((int) s1[counter] - s2[counter]);
	return ((int) -(s2[counter] - s1[counter]));
}

int	main()
{
	char s1_0[10] = "Hello";
	char s2_0[10] = "Hello";
	printf("s1 = Hello, s2 = Hello, strncmp = %i, ft_strncmp = %i\n", 
	strncmp(s1_0, s2_0, 10), ft_strncmp(s1_0, s2_0, 4));
	
	char s1_1[] = "Helloapkopokkopko";
	char s2_1[] = "Hellorzfefeo";
	printf("s1 = HelloBro, s2 = Hello\n, strncmp = %i, ft_strncmp = %i\n", 
	strncmp(s1_1, s2_1, 7), ft_strncmp(s1_1, s2_1, 7));
	
	char s1_2[] = "Hellgdazdazdzad";
	char s2_2[] = "Helldro";
	printf("s1 = Hello, s2 = HellBro, strncmp = %i, ft_strncmp = %i\n", 
	strncmp(s1_2, s2_2, 20), ft_strncmp(s1_2, s2_2, 20));
}

