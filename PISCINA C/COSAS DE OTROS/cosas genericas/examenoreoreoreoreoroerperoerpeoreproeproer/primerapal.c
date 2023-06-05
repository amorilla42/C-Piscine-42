/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   primerapal.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorilla <amorilla@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 14:25:44 by amorilla          #+#    #+#             */
/*   Updated: 2022/02/18 14:34:16 by amorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int main(int arc, char **args){
	int i = 0;
	if (arc>=2)
	{
		while(args[1][i] != '\0' && args[1][i] == ' ' && args[1][i] == '\t')
			i++;
		while(args[1][i] != '\0' && args[1][i] != ' ' && args[1][i] != '\t')
		{
			write(1,&args[1][i],1);
			i++;
		}
	}
	write(1,"\n",1);
	return 0;
}
