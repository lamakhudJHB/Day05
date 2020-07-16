/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamakhud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 14:16:29 by lamakhud          #+#    #+#             */
/*   Updated: 2020/07/16 14:26:14 by lamakhud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strncmp(char *s1, char *s2, unsigned int n){
	int i;

	i = 0;

	while(i<n){
		if(s1[i]==s2[i]){
			return 0;
		}
		else if(s1[i]>s2[i]){
		return -1;
		}
		else
		return 1;
	i++;
	}	
