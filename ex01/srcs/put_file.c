/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_file.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deydoux <deydoux@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 17:57:43 by deydoux           #+#    #+#             */
/*   Updated: 2023/07/26 09:58:57 by deydoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

int		put_error(char *filename, char *program_name);

int	put_file(char *filename, char *program_name)
{
	int		file;
	int		size;
	char	buffer;

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (put_error(filename, program_name));
	size = read(file, &buffer, 1);
	while (size)
	{
		if (size == -1)
			return (put_error(filename, program_name));
		write(1, &buffer, 1);
		size = read(file, &buffer, 1);
	}
	size = close(file);
	if (size == -1)
		return (put_error(filename, program_name));
	return (0);
}
