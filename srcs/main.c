/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolyans <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 19:05:06 by fpolyans          #+#    #+#             */
/*   Updated: 2017/10/12 06:13:40 by fpolyans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strip_header.h"

int		main(int ac, char **av)
{
	int		fd;
	int		buf_loc;
	int		file_size;
	char	buffer[(KB_SIZE + 1)];
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
		while ((buf_loc = read(fd, buffer, KB_SIZE)))
		{
			file_size++;
			buffer[buf_loc] = '\0';
		}
		file_size = file_size * KB_SIZE;
		file = (char*)malloc(sizeof(char) * file_size + 1);
		file = ft_strip_header(buffer);
		ft_putstr(file);
	}
	return (0);
}
