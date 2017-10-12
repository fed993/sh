/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strip_header.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpolyans <fpolyans@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/12 05:22:32 by fpolyans          #+#    #+#             */
/*   Updated: 2017/10/12 05:58:22 by fpolyans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file.h"

char	*ft_strip_header(char *s)
{
	int		i;
	char	*out;

	i = 0;
	out	= (char*)malloc(sizeof(char) * sizeof(s) + 1);
	if (s[i] == '/' && s[i + 1] == '*' && s[i + 2] == ' ')
	{
		out = &s[81 * 11];
	}
	ft_putstr(out);
	return (out);
}
