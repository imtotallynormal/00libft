/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kialvare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 11:49:27 by kialvare          #+#    #+#             */
/*   Updated: 2016/09/28 15:12:20 by kialvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int i;
	int littlelen;

	i = 0;
	if (little[i] == '\0')
		return((char*)big);
	littlelen = (int)ft_strlen((char*)little);
	while (*big)
	{
		while (*big == little[i] && *big && littlelen > i)
		{
			big++;
			i++;
		}
		
		if (i == littlelen)
		{
			big -= littlelen;
			return ((char*)big);
		}
		i = 0;
		big++;
	}
	return (NULL);
}
