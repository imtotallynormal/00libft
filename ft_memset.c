/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kialvare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/27 14:14:34 by kialvare          #+#    #+#             */
/*   Updated: 2016/09/27 17:59:09 by kialvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "libft.h"*/
#include <string.h>
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t i;
	unsigned char *ptr;
	
	ptr = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		ptr[i] = c;
		i++;
	}
	return(b);
}

int main()
{
	char str[50];

	strcpy(str, "This is a test.");
	puts(str);

	ft_memset(str, '$', 7);
	puts(str);

	return(0);
}
