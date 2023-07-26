/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deydoux <deydoux@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 17:25:10 by deydoux           #+#    #+#             */
/*   Updated: 2023/07/26 09:59:24 by deydoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	put_file(char *filename, char *program_name);

int	main(int argc, char **argv)
{
	char	*program_name;
	int		i;
	int		code;

	program_name = argv[0];
	if (--argc == 0)
		return (put_file("/dev/stdin", program_name));
	argv++;
	i = -1;
	code = 0;
	while (++i < argc)
		if (put_file(argv[i], program_name))
			code = 1;
	return (code);
}
