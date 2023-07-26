/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deydoux <deydoux@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 17:25:10 by deydoux           #+#    #+#             */
/*   Updated: 2023/07/26 09:05:07 by deydoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	put_file(char *filename);

int	main(int argc, char **argv)
{
	int	i;
	int	code;

	if (--argc == 0)
		return (put_file("/dev/stdin"));
	argv++;
	i = -1;
	code = 0;
	while (++i < argc)
		if (put_file(argv[i]))
			code = 1;
	return (code);
}
