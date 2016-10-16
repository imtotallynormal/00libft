/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kialvare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/12 12:21:54 by kialvare          #+#    #+#             */
/*   Updated: 2016/10/15 23:04:54 by kialvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		word_count(char *str)
{
  	int count;
	int i;
	int prev;
			
	i = 0;
	count = 0;
	prev = 0;
	while (str[i])
	{
		if ((str[i] == ' ' || str[i] == '\n' || str[i] == '\t') && prev == 1)
			prev = 0;
		if (prev == 0)
		{
			prev = 1;
			count++;
		i++;
	}
	return (count);
}

static 
char	*ft_strtrim(char const *s)
{
	int i;
	int len;
	char *str;

	i = 0;
	while (s[i] < len)
	{
		if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		  i++;
		else
		{
			ft_strcpy(str, &s[i]);
			i++;
		}
	}
	return (str);
}
