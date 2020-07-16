/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamakhud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 14:35:00 by lamakhud          #+#    #+#             */
/*   Updated: 2020/07/16 14:41:23 by lamakhud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char *ft_strlowcase(char *str){
	int i;

	i = 0;

	while(str[i] != '\0'){
		if(str[i]>= 'A' && str[i]<= 'Z'){
			str[i] = str[i] + 32;
		}
		else{
			return *str;
		}
		i++;
	}
	return *str;
}
