/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deydoux <deydoux@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 15:11:26 by deydoux           #+#    #+#             */
/*   Updated: 2023/07/25 19:36:08 by deydoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int	ft_putstr_err(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write(2, &str[i++], 1);
	return (1);
}

int	main(int argc, char **argv)
{
	int		fd;
	int		size;
	char	buffer;

	if (argc == 1)
		return (ft_putstr_err("File name missing.\n"));
	if (argc > 2)
		return (ft_putstr_err("Too many arguments.\n"));
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		return (ft_putstr_err("Cannot read file.\n"));
	size = read(fd, &buffer, 1);
	while (size)
	{
		if (size == -1)
			return (ft_putstr_err("Cannot read file.\n"));
		write(1, &buffer, 1);
		size = read(fd, &buffer, 1);
	}
	size = close(fd);
	if (size == -1)
		return (ft_putstr_err("Cannot read file.\n"));
}
