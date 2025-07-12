/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchonka <nchonka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 12:01:33 by nchonka           #+#    #+#             */
/*   Updated: 2024/07/10 12:01:36 by nchonka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void*))
{
	if (!f)
		return ;
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}
/*
void print_string(void *str)
{
    printf("%s\n", (char *)str);
}

int main()
{
    t_list *list = NULL;

  
    ft_lstadd_back(&list, ft_lstnew(ft_strdup("Hello")));
    ft_lstadd_back(&list, ft_lstnew(ft_strdup("World")));
    ft_lstadd_back(&list, ft_lstnew(ft_strdup("from")));
    ft_lstadd_back(&list, ft_lstnew(ft_strdup("your")));
    ft_lstadd_back(&list, ft_lstnew(ft_strdup("library")));

    ft_lstiter(list, print_string);

    while (list)
    {
        t_list *temp = list;
        list = list->next;
        free(temp->content);
        free(temp);
    }
	// cc -Wall -Wextra -Werror ft_lstiter.c 
	// ft_lstadd_back.c ft_lstnew.c ft_strdup.c ft_strlen.c ft_lstlast.c
    return 0;
}
*/
