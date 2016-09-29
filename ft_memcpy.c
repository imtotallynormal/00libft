/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kialvare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 11:06:00 by kialvare          #+#    #+#             */
/*   Updated: 2016/09/28 11:09:07 by kialvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int i;
	char *d;
	const char *s;

	i = 0;
	d = dest;
	s = src;
	while (i < (int)n)
	{
		d[i] = s[i];
		i++;
	}
	return(dest);
}
