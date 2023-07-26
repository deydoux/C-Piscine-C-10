/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deydoux <deydoux@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 17:25:10 by deydoux           #+#    #+#             */
/*   Updated: 2023/07/26 08:54:22 by deydoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	print_file(char *filename);

int	main(int argc, char **argv)
{
	int	i;
	int	code;

	if (--argc == 0)
		return (print_file("/dev/stdin"));
	argv++;
	i = -1;
	code = 0;
	while (++i < argc)
		if (print_file(argv[i]))
			code = 1;
	return (code);
}
