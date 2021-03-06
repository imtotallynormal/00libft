/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kialvare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/07 20:14:04 by kialvare          #+#    #+#             */
/*   Updated: 2016/10/07 20:53:11 by kialvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_strdel(char **as)
{
	// ft_memdel((void *)*as);
	free(*as);
	*as = NULL;
}

// int	main(void)
// {
// 	char		*ret;

// 	ft_strdel(NULL);
// 	ret = ft_strnew(4);
// 	ft_strdel(&ret);
// 	if (ret != NULL)
// 		printf("there seems to be an error");
// 	ret = ft_strnew(0);
// 	ft_strdel(&ret);
// 	if (ret != NULL)
// 		printf("there seems to be an error");
// 	return (1);
// }