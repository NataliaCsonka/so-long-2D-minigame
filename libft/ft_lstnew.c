/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchonka <nchonka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 12:02:03 by nchonka           #+#    #+#             */
/*   Updated: 2024/07/10 12:02:05 by nchonka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*elt;

	elt = (t_list *)malloc(sizeof(t_list));
	if (!elt)
		return (NULL);
	elt->content = content;
	elt->next = NULL;
	return (elt);
}
/*
int main() {
    char *data = "Hello, world!";
    t_list *newElement = ft_lstnew(data);

    printf("%s\n", (char *)newElement->content);
    free(newElement);
    return 0;
}
*/