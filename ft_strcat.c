/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kialvare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 11:21:51 by kialvare          #+#    #+#             */
/*   Updated: 2016/09/28 11:30:14 by kialvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int dlen;
	int slen;
	int i;

	i = 0;
	dlen = (int)ft_strlen(dest);
	slen = (int)ft_strlen((char*)src);
	while (dlen <= (dlen + slen))
	{
		dest[dlen] = src[i];
		dlen++;
		slen--;
		i++;
	}
	dest[dlen] = '\0';
	return(dest);
}
