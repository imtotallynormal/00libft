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
#include <stdio.h>
#include <stdlib.h>

static int	ft_checkwhitespace(const char *str, int i)
{
	if ((str[i]) == ' ' || (str[i]) == '\t' || (str[i]) == '\n' ||
		(str[i]) == '\v' || (str[i]) == '\r' || (str[i]) == '\f' ||
		(str[i]) == '0')
		return (1);
	else
		return (0);
}

static int	ft_checksign (const char *str, int i)
{
	if ((str[i]) == '-' || (str[i]) == '+')
	{
		i++;
		if(!(((str[i]) >= '0') && ((str[i]) <= '9')))
			return (0);
	}
	return (i);
}

int     ft_atoi(const char *str)
{
	int a;
	int i;
	int j; 

	a = 0;
	i = 0;
	j = 1;
	while (ft_checkwhitespace(str, i) == 1)
		i++;
	i = ft_checksign(str, i);
	while ((str[i]) != '\0')
	{
		if ((str[i - 1]) == '-')
			j = -1;
		if (((str[i]) >= '0') && ((str[i]) <= '9'))
		{
			a = a * 10 + str[i] - '0';
			i++;
		}
		else
			return (j * a);
	}
	return (j * a);
}

// int		main(void)
// {
// 	// if (atoi("\n\v\t\r\f -123") != ft_atoi("\n\v\t\r\f -123"))
// 	// 	printf("Doesn't work");
// 	// else
// 	// 	printf("It works");
// 	// if (atoi("12-3") != ft_atoi("12-3"))
// 	// 	printf("Doesn't work");
// 	// else
// 	// 	printf("It works");
// 	// if (atoi("-+123") != ft_atoi("-+123"))
// 	// 	printf("Doesn't work");
// 	// else
// 	// 	printf("It works");
// 	// if (atoi("a123") != ft_atoi("a123"))
// 	// 	printf("Doesn't work");
// 	// else
// 	// 	printf("It works");
// 	// if (atoi("123a") != ft_atoi("123a"))
// 	// 	printf("Doesn't work");
// 	// else
// 	// 	printf("It works");
// 	// if (atoi("123") != ft_atoi("123"))
// 	// 	printf("Doesn't work");
// 	// else
// 	// 	printf("It works");
// 	// if (atoi("-123") != ft_atoi("-123"))
// 	// 	printf("Doesn't work");
// 	// else
// 	// 	printf("It works");
// 	// if (atoi("+123") != ft_atoi("+123"))
// 	// 	printf("Doesn't work");
// 	// else
// 	// 	printf("It works");
// 	// if (atoi(" - 123") != ft_atoi(" - 123"))
// 	// 	printf("Doesn't work");
// 	// else
// 	// 	printf("It works");
// 	// if (atoi("\t -123") != ft_atoi("\t -123"))
// 	// 	printf("Doesn't work");
// 	// else
// 	// 	printf("It works");
// 	// if (atoi("-2147483648") != ft_atoi("-2147483648"))
// 	// 	printf("Doesn't work");
// 	// else
// 	// 	printf("It works");
// 	// if (atoi("2147483647") != ft_atoi("2147483647"))
// 	// 	printf("Doesn't work");
// 	// else
// 	// 	printf("It works");
// 	// if (atoi("") != ft_atoi(""))
// 	// 	printf("Doesn't work");
// 	// else
// 	// 	printf("It works");

// 	size_t i;
// 	size_t j;
// 	char str[12] = {0};

// 	i = 0;
// 	while (i < 512)
// 	{
// 		j = 0;
// 		while (j < 11)
// 		{
// 			str[j] = ((char)rand() % 10) + '0';
// 			j++;
// 		}
// 		str[11] = 0;
// 		if (atoi(str) != ft_atoi(str))
// 			printf("there's an error here");
// 		i++;
// 	}
// }