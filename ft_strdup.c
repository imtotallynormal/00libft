/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kialvare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 12:02:28 by kialvare          #+#    #+#             */
/*   Updated: 2016/10/05 17:36:01 by kialvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	int strlen;
	char *dup;

	strlen = ft_strlen(s1);
	if (!(dup = (char *)malloc(sizeof(char) * (strlen + 1))))
		return (NULL);
	else
	{
		ft_strcpy(dup, s1);
		return (dup);
	}
}
