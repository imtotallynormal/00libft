/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kialvare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/26 18:15:57 by kialvare          #+#    #+#             */
/*   Updated: 2016/09/28 13:53:19 by kialvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void *tmp;

	tmp = ft_memalloc(len + 1);
	tmp = ft_memcpy(tmp, src, len);
	dst = ft_memcpy(dst, src, len);
	free(tmp);
	return (dst);
}
