/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot13.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorilla <amorilla@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 14:42:43 by amorilla          #+#    #+#             */
/*   Updated: 2022/02/18 14:55:58 by amorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int arc, char **arg){

	int i=0;
	char owo;
	if(arc==2)
	{
		while(arg[1][i]!='\0'){
			if(arg[1][i]>='a' && arg[1][i]<='z'){
				owo=(arg[1][i]+13)%26+'a';
				write(1,&owo,1);
			} if(arg[1][i]>='A' && arg[1][i]<='Z'){
				owo=(arg[1][i]+13)%26+'A';
				write(1,&owo,1);
			}
			i++;
		}
			
	}
	write(1,"\n",1);
	return 0;

}
