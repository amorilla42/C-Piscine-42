/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cosadeargs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorilla <amorilla@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 13:02:27 by amorilla          #+#    #+#             */
/*   Updated: 2022/02/18 13:49:57 by amorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

char *reversa(char *str){
	
	char aux;
	int tam=0;
	int i=0;
	
	while(str[tam]!='\0'){
		tam++;
	}
	while(i<=tam/2){
		
		aux=str[i];
		str[i]=str[tam -i -1];
		str[tam-i-1]=aux;
		i++;
	}
	
	return str;
}

int main(int arc, char **args)
{
	args[1]=reversa(args[1]);	
	printf("%s",args[1]);
	return 0;
}







