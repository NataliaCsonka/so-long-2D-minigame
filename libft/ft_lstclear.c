/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchonka <nchonka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 12:01:08 by nchonka           #+#    #+#             */
/*   Updated: 2024/07/10 12:01:12 by nchonka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!del || !lst || !*lst)
		return ;
	while (lst && *lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
}
/*
void del_1(void *content) {
    free(content);
}

int main()
{
    t_list *list = NULL;

    ft_lstadd_back(&list, ft_lstnew(ft_strdup("World")));
    ft_lstadd_back(&list, ft_lstnew(ft_strdup("Hello")));

    // Print the list
    // ft_lstclear(&list, del);

    t_list *current = list;
    while (current)
    {
        printf("%s \n", (char *)current->content);
        current = current->next;
    }
    ft_lstclear(&list, del_1);

    return 0;
	// cc -Wall -Wextra -Werror ft_lstadd_back.c ft_lstnew.c 
	// ft_strdup.c ft_lstdelone.c ft_strlen.c ft_lstlast.c ft_lstclear.c
}
*/
