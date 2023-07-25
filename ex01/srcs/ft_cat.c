/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deydoux <deydoux@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 17:25:10 by deydoux           #+#    #+#             */
/*   Updated: 2023/07/25 18:21:50 by deydoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>

int	read_fd(int fd, char *filename);

int	main(int argc, char **argv)
{
	int	i;
	int	code;

	if (--argc == 0)
		return (read_fd(0, 0));
	argv++;
	i = -1;
	code = 0;
	while (++i < argc)
		if (read_fd(open(argv[i], O_RDONLY), argv[i]))
			code = 1;
	return (code);
}
