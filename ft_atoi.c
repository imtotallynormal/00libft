/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kialvare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/26 18:08:46 by kialvare          #+#    #+#             */
/*   Updated: 2016/09/26 18:10:55 by kialvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_atoi(char *str)
{
	int i;
	int ans;
	int negative;

	i = 0;
	ans = 0;
	negative = 1;
	if (str[0] == '-')
		negative = -1;
	while (str[i] != '\0')
	{
		ans = ans * 10 + str[i] - '0';
		i++;
	}
	return (ans * negative);
}

