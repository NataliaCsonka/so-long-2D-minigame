/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchonka <nchonka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 11:59:03 by nchonka           #+#    #+#             */
/*   Updated: 2024/07/10 11:59:06 by nchonka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total_size;
	size_t	i;
	void	*ptr;

	total_size = count * size;
	if (count && total_size / count != size)
		return (NULL);
	ptr = malloc(total_size);
	i = 0;
	if (ptr == NULL)
		return (NULL);
	else
	{
		while (total_size-- > 0)
		{
			((char *)ptr)[i++] = 0;
		}
		return (ptr);
	}
}
/*
int main() {
    int *arr;
    size_t num_elements = 4;
    

    arr = (int *)calloc(num_elements, sizeof(int));
    
    if (arr == NULL) {
        printf("Flase.\n");
        return 1;
    }

    for (size_t i = 0; i < num_elements; i++) {
        printf("arr[%zu] = %d\n", i, arr[i]);
    }

    free(arr);

    return 0;
}
*/
