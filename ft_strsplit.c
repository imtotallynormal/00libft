/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kialvare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/13 20:41:27 by kialvare          #+#    #+#             */
/*   Updated: 2016/10/15 23:04:56 by kialvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		word_count(const char *s, char c)
{
	int len;
	int word;

	word = 0;
	len = 0;
	while (*s != '\0')
	{
		if (word == 1 && *s == c)
			word = 0;
		if (word == 0 && *s != c)
		{
			word = 1;
			len++;
		}
		s++;
	}
	return (len);
}

static int		word_length(const char *s, char c)
{
	int len;

	len = 0;
	while (*s != c && *s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

char	**ft_strsplit(char const *s, char c)
{
	char **arr;
	int length;
	int i;

	i = 0;
	length = word_count(s, c);
	arr = (char **)malloc(sizeof(*arr) * (length + 1));
	if (arr == NULL)
	  return (NULL);
	while (length--)
	{
		while (*s == c && *s != '\0')
			s++;
		arr[i] = ft_strsub((const char *)s, 0, word_length((const char *)s, c));
		if (arr[i] == NULL)
			return (NULL);
		s += word_length(s, c);
		i++;
	}
	return (arr);
}

