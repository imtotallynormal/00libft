/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kialvare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/12 09:38:37 by kialvare          #+#    #+#             */
/*   Updated: 2016/10/12 12:15:26 by kialvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int len;
	char  *str;
	
	len = ft_strlen(s1) + ft_strlen(s2);
	str = ft_strnew(len);
	ft_strcpy(str, s1);
	ft_strcpy(str, s2);
	return (str);
}
