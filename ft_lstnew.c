/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kialvare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/19 16:33:34 by kialvare          #+#    #+#             */
/*   Updated: 2016/10/19 16:33:42 by kialvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *new;

	new = (t_list *)malloc(sizeof(t_list));
	if (new == NULL)
		return (NULL);
	if (content == NULL)
	{
		new->content = NULL;
		new->content_size = 0;
	}
	else
	{
		new->content = malloc(sizeof(content));
		if (new->content == NULL)
			return (NULL);
		ft_memcpy((new->content), content, content_size);
		new->content_size = content_size;
	}
	new->next = NULL;
	return (new);

	// t_list *new;

	// if ((new = (t_list *)malloc(sizeof(*new))) == NULL)
	// 	return (NULL);
	// new->next = NULL;
	// if (content != NULL && content_size != 0)
	// {
	// 	if ((new->content = malloc(content_size)) == NULL)
	// 		return (NULL);
	// 	ft_memcpy(new->content, content, content_size);
	// 	new->content_size = content_size;
	// }
	// else
	// {
	// 	new->content = NULL;
	// 	new->content_size = 0;
	// }
	// return (new);
}

