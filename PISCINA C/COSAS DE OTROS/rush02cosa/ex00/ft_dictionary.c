/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dictionary.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorilla <amorilla@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 19:44:19 by amorilla          #+#    #+#             */
/*   Updated: 2022/02/27 23:32:19 by amorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"
#include <stdio.h>

typedef struct s_word{
	char	*key;
	char	*value;
}s_word;
struct s_word  *ft_putword(struct s_word *dict, char *row, int word_index, int size);
int	ft_countlines(char *fname)
{
	int		fid;
	char	a;
	int		numbytes;
	int		numlines;

	numlines = 0;
	fid = open(fname, O_RDONLY);
	numbytes = read(fid, &a, sizeof(char));
	while (numbytes > 0)
	{
		if (a == ':')
			numlines++;
		numbytes = read(fid, &a, sizeof(char));
	}
	close(fid);
	return (numlines + 1);
}

struct s_word	*ft_init_dict(char *fname)
{
	int count;

	count = ft_countlines(fname);
	return (malloc(sizeof(struct s_word) * count));
}

char	*ft_lenofwords(char mode, char *sub_word, int size, char *row)
{
	int i;

	i = 0;
	while (row[i] >= '0' && row[i] <= '9')
		i++;
	if(mode=='k')
	{
		sub_word= malloc(sizeof(char)*(i+1));
	} 
	else if(mode == 'v')
	{
		while((row[i] ==':') || (row[i]==' '))
			i++;
		sub_word= malloc(sizeof(char)*(size-i+1));
	}
	return (sub_word);
}

void	ft_split(char *row, char *key, char *value, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (row[i] >= '0' && row[i] <= '9')
	{	
		key[i]=row[i];
		i++;
	}	
	//printf("row: %s, key[%d]: %s\n",row, i, key);
	while((row[i]==':') || (row[i]==' '))
		i++;
	while(i < size)
	{
		value[j]=row[i];
		i++;
		j++;
	}
}

void	ft_resetarray(char *str)
{
	int i;

	i=0;
	while(str[i])
	{
		str[i]='\0';
		i++;
	}
}


struct s_word	*ft_fill_dict(struct s_word *dict, char *fname)
{
	int		fid;
	int		numbytes;
	int		i;
	int		word_index;
	char	row[100]="";
	
	word_index = 0;
	i = 0;
	fid = open(fname, O_RDONLY);
	numbytes = read(fid, row, sizeof(char));
	i++;
	while (numbytes > 0)
	{
		while (row[i-1] != '\n' && numbytes > 0)
		{
			numbytes = read(fid, &row[i], sizeof(char));
			i++;
		}
		i--;
		dict = ft_putword(dict, row, word_index, i);
		word_index++;
		ft_resetarray(row);
		i = 0;
	}
	close(fid);

	return (dict);
}

struct s_word	*ft_putword(struct s_word *dict, char *row, int word_index, int size)
{
	char	*key="";
	char	*value="";

	key = ft_lenofwords('k', key, size, row);
	value = ft_lenofwords('v', value, size, row);
	ft_split(row, key, value, size);
	
	dict[word_index].key = key;
	dict[word_index].value = value;
	return (dict);

}	

struct s_word *ft_read_dict(char *fname)
{
	struct s_word *dict;
	dict = ft_init_dict(fname);
	dict = ft_fill_dict(dict,fname);
	return (dict);
}

int ft_strlen(char *str)
{
	int i;
	
	i=0;
	while(str[i])
		i++;
	return (i);

}

void putstr(char *str)
{
	while(str)
	{
		write(1,str,1);
		str++;
	}
}

void ft_find_key(char *number, struct s_word *dict, int len_num)
{
	int i = 0;
	int j = 0;
	int found = 0;

	while(i<len_num && found==0)
	{
		i = 0;
		while(dict[j].key[i]==number[i] && number[i])
			i++;
		if((dict[j].key[i]-number[i]) == 0)
		{	
			found=1;
		}
		j++;
	}
		
	if(found)
		putstr(dict[j-1].value);
			
}

void	ft_writepower( struct s_word *dict, int i, int len_num)
{
	char num[len_num];
	int j = 1;
	num[0]='1';
	while(j<(len_num-i))
	{
		num[j]='0';
		j++;
	}
	ft_find_key(num,dict,(len_num-i));
}	

void ft_writeunits(char *number,  struct s_word *dict, int i, int len_num)
{
	if(i==len_num && number[i]=='0')
	{	
		ft_find_key(number, dict, 1);
		if(len_num!=1)
			ft_writepower(dict, i, len_num);
	} 
}
	
void ft_writehundreds(char *number,  struct s_word *dict)
{
	ft_find_key(number, dict, 1);
	ft_find_key("100", dict, 3);
}
int	ft_writetens(char *number, struct s_word *dict, int i, int len_num)
{
	char num[3];

	if(number[i]=='1')
	{
		num[0]=number[i];
		num[1]=number[i+1];
		ft_find_key(num, dict, 2);
		ft_writepower(dict, i, len_num);
		return (1);
	}
	else
	{
		num[0]=number[i];
		num[1]='0';
		ft_find_key(num,dict,2);
		return 0;
	}
}




void	ft_print_number(char *number,  struct s_word *dict)
{
	int len_num;
	int i;
	int units_written;

	i = 0;
	len_num=ft_strlen(number);
	while(i<len_num)
	{
		if((len_num-i)%3 == 0) //centenas
		{
			ft_writehundreds(number,dict);
		} 
		else if((len_num-i+1)%3 == 0)
		{
			units_written = ft_writetens(number,dict,i,len_num);
		}
		else
		{
			if(units_written == 0)
				ft_writeunits(number,dict,len_num,i);
		}

		i++;
	}


}

int main(int argc, char **args){

	struct s_word *dict;
	int 	size;

	if(argc == 2){
		dict = ft_read_dict("number.dict");
		size = ft_countlines("numbers.dict");
		ft_print_number(args[1],dict);
	}
	else if(argc==3)
	{
		dict = ft_read_dict(args[1]);
		size = ft_countlines(args[1]);
		ft_print_number(args[2],dict);
	}


	int i=0;
	while(i<size-1){
        free(dict[i].key);
		free(dict[i].value);
         i++;
    }
	free(dict);

	return 0;
}
