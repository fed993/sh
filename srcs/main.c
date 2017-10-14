/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolyans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 19:05:06 by fpolyans          #+#    #+#             */
/*   Updated: 2017/10/13 19:28:29 by fpolyans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strip_header.h"

int		main(int ac, char **av)
{
	int		fdin;
	int		fdout;
	int		buf_loc;
	int		file_size;
	char	buffer[(KB_SIZE * 20 + 1)];

	file_size = 0;
	fdin = open(av[ac - 1], O_RDWR);
	if (ac < 2)
	{
		ft_putstr("File name missing.\n");
		return (1);
	}
	if (ac > 2)
	{
		ft_putstr("Too many arguments.\n");
		return (1);
	}
	else
	{
		read(fdin, buffer, 3);
		if (buffer[0] == '/' && buffer[1] == '*' && buffer[2] == ' ')
		{
//			close(fdin);
//			fdin = open(av[ac - 1], O_RDWR);
			fdout = open(av[ac - 1], O_RDWR);
			read(fdin, buffer, 888);
			while ((buf_loc = read(fdin, buffer, 1)))
			{
				file_size++;
				buffer[buf_loc] = '\0';
				write(fdout, buffer, 1);
			}
			truncate(av[ac - 1], file_size);
		}
	}
	return (0);
}
