/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kialvare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/27 20:57:37 by kialvare          #+#    #+#             */
/*   Updated: 2016/09/27 21:01:19 by kialvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

int		ft_putstr(int c)
{
	int i;
	
	i = 0;
	while (c[i] != '\0')
	{
		ft_putchar(1, c[i], 1);
		i++;
	}
	return(c);
}