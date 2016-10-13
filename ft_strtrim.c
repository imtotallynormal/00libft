/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kialvare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/12 12:21:54 by kialvare          #+#    #+#             */
/*   Updated: 2016/10/12 13:16:57 by kialvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int i;
	int len;
	char *str;

	len = ft_strlen(s);
	str = ft_memalloc(len);
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
