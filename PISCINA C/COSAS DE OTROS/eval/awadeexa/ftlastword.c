/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftlastword.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorilla <amorilla@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 13:16:19 by amorilla          #+#    #+#             */
/*   Updated: 2022/02/25 13:29:21 by amorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void lastwor(char *str){

	int len;
	int i;

	len=0;
	while(str[len])
		len++;
	len--;
	while(str[len] && (str[len]==' ' || str[len]=='\t'))
		len--;

	i=len;

	while(str[i]!='\t' && str[i]!=' ')
	{
		i--;
	}
	i++;
	while(i<=len)
	{
		write(1,&str[i],1);
		i++;
	}
}

int main(){
	
	lastwor("holabuenas awa   putas4444   ");	
	return 0;
}




