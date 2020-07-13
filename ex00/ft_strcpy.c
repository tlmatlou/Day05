/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlmatlou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 13:00:22 by tlmatlou          #+#    #+#             */
/*   Updated: 2020/07/13 15:16:39 by tlmatlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include <stdlib.h>

char *ft_strcpy(char *dest, char *src)
{
	int i =0;
	while(src[i] !='\0')
	{
		dest[i]=src[i];
	   	i++;
	}
	return dest;

}
/*int main()
{
	int i;
	char *a;
	char *b="The president said no one should drink till he says otherwise.... '";

	i=0;

	while(b[i])
		i++;
	a = (char*)malloc(sizeof(char*)*i);


	ft_strcpy(a,b);
	printf("%s",a);


	return 0;

	
}*/
