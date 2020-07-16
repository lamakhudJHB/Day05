/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamakhud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 14:55:32 by lamakhud          #+#    #+#             */
/*   Updated: 2020/07/16 15:14:12 by lamakhud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_str_is_alpha(char *str){
	int i;

	i = 0;

	while(str[i] != '\0'){
		if(str[i] >= 'a' && str[i] <= 'Z'){
			return 1;
		}
		else if(strlen(str) == 0){
			return 1;
		}
		return 0;
	}
	return 1;
}
