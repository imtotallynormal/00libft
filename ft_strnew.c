/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kialvare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/07 14:21:58 by kialvare          #+#    #+#             */
/*   Updated: 2016/10/07 20:13:54 by kialvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char *str;
	int i;

	str = (char *)malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	else
	{
		i = 0;
		while (i <= (int)size)
		{
	  		str[i] = 0;
	  		i++;
		}
	}
	return (str);
}
