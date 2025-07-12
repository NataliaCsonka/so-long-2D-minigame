/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchonka <nchonka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 12:05:24 by nchonka           #+#    #+#             */
/*   Updated: 2024/07/10 12:05:41 by nchonka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*string;
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	if (s1 == 0 || s2 == 0)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	string = (char *)malloc(sizeof(char) * (len + 1));
	if (!string)
		return (NULL);
	while (s1[i] != '\0')
	{
		string[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
		string[i++] = s2[j++];
	string[i] = '\0';
	return (string);
}
/*
int main() 
{
    char *s1 = "Hello, ";
    char *s2 = "world!";
    char *result = ft_strjoin(s1, s2);
    
    printf("%s\n", result); 
    free(result);
    return (0);
}
*/
