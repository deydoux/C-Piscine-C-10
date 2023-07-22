/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deydoux <deydoux@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 15:11:26 by deydoux           #+#    #+#             */
/*   Updated: 2023/07/22 16:08:29 by deydoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
	return (0);
}

int	main(int argc, char **argv)
{
	int		file;
	int		result;
	char	str[2];

	if (argc == 1)
		return (ft_putstr("File name missing.\n"));
	if (argc > 2)
		return (ft_putstr("Too many arguments.\n"));
	file = open(argv[1], O_RDONLY);
	if (file == -1)
		return (ft_putstr("Connot read file.\n"));
	result = read(file, str, 1);
	while (result)
	{
		str[result] = 0;
		ft_putstr(str);
		result = read(file, str, 1);
	}
	result = close(file);
	if (result == -1)
		return (ft_putstr("Connot read file.\n"));
}
