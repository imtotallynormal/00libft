/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kialvare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 12:25:05 by kialvare          #+#    #+#             */
/*   Updated: 2016/09/28 12:49:57 by kialvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*dest;
	const char	*s;
	size_t	n;
	size_t	dlen;

	dest = dst;
	s = src;
	n = size;
	while (n-- != 0 && *dest != '\0')
		dest++;
	dlen = dest - dst;
	n = size - dlen;
	if (n == 0)
		return (dlen + strlen(s));
	while (*s)
	{
		if (n != 1)
		{
			*dest++ = *s;
			n--;
		}
		s++;
	}
	*dest = '\0';
	return (dlen + (s - src));
}
