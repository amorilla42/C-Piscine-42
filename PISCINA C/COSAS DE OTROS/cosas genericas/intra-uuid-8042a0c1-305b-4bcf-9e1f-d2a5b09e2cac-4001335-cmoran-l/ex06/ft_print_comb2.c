/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmoran-l <cmoran-l@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 18:36:23 by cmoran-l          #+#    #+#             */
/*   Updated: 2022/02/16 15:16:58 by amorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print(char *ptraux1, char *ptraux2);
void	ft_onemore(char *ptr);
void	ft_resetnumb(char *ptr);
void	ft_compnumb(char *ptraux1, char *ptraux2);

void	ft_print_comb2(void)
{
	char	numb1[2];
	char	numb2[2];
	char	*ptraux1;
	char	*ptraux2;

	numb1[0] = '0';
	numb1[1] = '0';
	numb2[0] = '0';
	numb2[1] = '1';
	ptraux1 = &numb1[0];
	ptraux2 = &numb2[0];
	while (numb1[0] <= '9' )
	{
		while (numb2[0] <= '9')
		{
			ft_compnumb(ptraux1, ptraux2);
			ft_onemore(ptraux2);
		}
		ft_resetnumb(ptraux2);
		ft_onemore(ptraux1);
	}
}

//compare both numbers to print it
void	ft_compnumb(char *ptraux1, char *ptraux2)
{
	if (*ptraux1 == *ptraux2 || *(ptraux1 + 1) != *(ptraux2 + 1))
	{
		if (*ptraux1 == '9' && *(ptraux1 + 1) == '8')
		{
			if (*ptraux2 == '9' && *(ptraux2 + 1) == '9')
			{
				ft_print(ptraux1, ptraux2);
			}
		}
		else if (*(ptraux1 + 1) < *(ptraux2 + 1))
		{
			ft_print(ptraux1, ptraux2);
			write(1, ", ", 2);
		}	
	}
}

//print both numbers
void	ft_print(char *ptraux1, char *ptraux2)
{
	write(1, ptraux1, 2);
	write(1, " ", 1);
	write(1, ptraux2, 2);
}

//add one more digits to number
void	ft_onemore(char *ptr)
{
	if (*(ptr + 1) < '9')
		*(ptr + 1) += 1;
	else if (*ptr <= '9')
	{
		*(ptr + 1) = '0';
		*ptr += 1;
	}
}

//reset number to 00
void	ft_resetnumb(char *ptr)
{
	*ptr = '0';
	*(ptr + 1) = '0';
}

int main(){
ft_print_comb2();
return 0;
}




