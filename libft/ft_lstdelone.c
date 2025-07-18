/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchonka <nchonka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 12:01:17 by nchonka           #+#    #+#             */
/*   Updated: 2024/07/10 12:01:20 by nchonka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!del)
		return ;
	if (lst)
	{
		(*del)(lst->content);
		free (lst);
	}
}
/*
void del(void *content)
{
	free(content);
}

int main()
{
    t_list *list = NULL;

    ft_lstadd_back(&list, ft_lstnew(ft_strdup("Hello")));
    ft_lstadd_back(&list, ft_lstnew(ft_strdup("World")));
    ft_lstadd_back(&list, ft_lstnew(ft_strdup("from")));
    ft_lstadd_back(&list, ft_lstnew(ft_strdup("your")));
    ft_lstadd_back(&list, ft_lstnew(ft_strdup("library")));

    t_list *current = list;
    while (current)
    {
        printf("%s ", (char *)current->content);
        current = current->next;
    }
    printf("\n");


    while (list)
    {
        t_list *temp = list;
        list = list->next;
        ft_lstdelone(temp, del);
    }
	// cc -Wall -Wextra -Werror ft_lstadd_back.c ft_lstnew.c 
	ft_strdup.c ft_lstdelone.c ft_strlen.c ft_lstlast.c  
    return 0;
}
*/
