/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolyans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 19:05:06 by fpolyans          #+#    #+#             */
/*   Updated: 2017/10/12 07:00:24 by fpolyans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strip_header.h"

int		main(int ac, char **av)
{
	int		fd;
	int		buf_loc;
	int		file_size;
	char	buffer[(KB_SIZE * 20 + 1)];
	char	*file;

	file_size = 0;
	fd = open(av[ac - 1], O_RDWR);
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
		while ((buf_loc = read(fd, buffer, 1)))
		{
			file_size++;
			buffer[buf_loc] = '\0';
			
		}
		file = (char*)malloc(sizeof(char) * file_size + 1);
		read(fd, file, file_size);
		file = ft_strip_header(file);
		ft_putstr(file);
	}
	return (0);
}
