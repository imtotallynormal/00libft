/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kialvare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/26 18:08:46 by kialvare          #+#    #+#             */
/*   Updated: 2016/10/18 17:08:32 by kialvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_sign(char const *str, int count)
{
	int i;

	i = 0;
	while (str[i] == '\f' || str[i] == '\t' || str[i] == '\n' ||
		str[i] == '\v' || str[i] == '\r' || str[i] == ' ' || str[i] == '+')
	{
		if (str[i] == '+')
		{
			count++;
			if (count > 1)
				return (0);
			i++;
		}
		else
			i++;
	}
	return (count);
}

int     ft_atoi(const char *str)
{
	unsigned int i;
	int ans;
	int negative;
	int count; 

	i = 0;
	ans = 0;
	negative = 1;
	count = 0;
	count = check_sign(str, count);
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
