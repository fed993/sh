/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strip_file.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolyans <fpolyans@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/12 05:44:43 by fpolyans          #+#    #+#             */
/*   Updated: 2017/10/12 05:45:35 by fpolyans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRIP_FILE_H
# define STRIP_FILE_H

#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#define MB_SIZE 1048576
#define KB_SIZE 1024

void    ft_putchar(char c);
void    ft_putstr(char *c);
void    ft_putnbr(int i);
char    *ft_strip_header(char *s);

#endif
