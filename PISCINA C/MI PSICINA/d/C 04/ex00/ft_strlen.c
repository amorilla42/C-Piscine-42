/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorilla <amorilla@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 20:07:06 by amorilla          #+#    #+#             */
/*   Updated: 2022/02/24 13:07:44 by amorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_strlen(char *str)
{
	int	tam;

	tam = 0;
	while (str[tam] != '\0')
	{
		tam++;
	}
	return (tam);
}
/*
int main(){

	int a = ft_strlen("hola");
	printf("%d",a);
	return 0;
}*/
