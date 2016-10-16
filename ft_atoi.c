/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kialvare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/26 18:08:46 by kialvare          #+#    #+#             */
/*   Updated: 2016/10/10 17:22:25 by kialvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_atoi(const char *str)
{
	unsigned int i;
	int ans;
	int negative;

	i = 0;
	ans = 0;
	negative = 1;
	while (str[i] == '\f' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || 
		str[i] == '\r' || str[i] == ' ' || str[i] == '+')
		i++;
	if (str[i] == '+')
	{
		i++;
		return (0);
	}
	if (str[i] == '-')
	{
		negative = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		ans = ans * 10;
		ans = ans + (str[i] - '0');
		i++;
	}
	return (ans * negative);
}

