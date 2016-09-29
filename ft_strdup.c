/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kialvare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 12:02:28 by kialvare          #+#    #+#             */
/*   Updated: 2016/09/28 15:58:51 by kialvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	int i;
	int strlen;
	char *strdup;

	i = 0;
	strlen = ft_strlen((char*)s1);
	strdup = (char*)malloc((strlen + 1) * sizeof(*s1));
	strdup[strlen + 1] = '\0';
	while (i <= strlen)
	{
		strdup[i] = s1[i];
		i++;
	}
	return (strdup);
}
