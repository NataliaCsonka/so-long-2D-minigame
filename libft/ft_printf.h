/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchonka <nchonka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 12:03:14 by nchonka           #+#    #+#             */
/*   Updated: 2024/07/10 12:03:17 by nchonka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

char	*ft_itoa(int n);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
int		ft_printf(const char *input, ...);
int		ft_putstr(char *str);
int		ft_putptr(unsigned long long ptr);
int		ft_putnbr(int n);
int		ft_putnbr_unsigned(unsigned int num);
int		ft_putnbr_hexad(unsigned int num, const char format);
int		ft_strlen(const char *str);

#endif
