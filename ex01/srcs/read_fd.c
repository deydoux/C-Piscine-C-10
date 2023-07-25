/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_fd.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deydoux <deydoux@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 17:57:43 by deydoux           #+#    #+#             */
/*   Updated: 2023/07/25 18:25:12 by deydoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		put_error(char *filename);
void	ft_putstr(char *str);

int	read_fd(int fd, char *filename)
{
	int		size;
	char	buffer[2];

	if (fd == -1)
		return (put_error(filename));
	size = read(fd, buffer, 1);
	while (size)
	{
		if (size == -1)
			return (put_error(filename));
		buffer[size] = 0;
		ft_putstr(buffer);
		size = read(fd, buffer, 1);
	}
	size = close(fd);
	if (size == -1)
		return (put_error(filename));
	return (0);
}
