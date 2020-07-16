/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamakhud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 14:06:41 by lamakhud          #+#    #+#             */
/*   Updated: 2020/07/16 14:14:42 by lamakhud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strcmp(char *s1, char *s2){
	int x;
	int y;
	int i;
	int j;

	i = 0;
	j = 0;
	x = 0;
	y = 0;

	while(s1[i] != '|0'){
		x = x + i;
	}
	while(s2[j] != '\0'){
		y = y + j;
	}
	if(x == y){
		return 0;
	}
	else if(x > y){
		return 1;
	}
	else
		return -1;
}
