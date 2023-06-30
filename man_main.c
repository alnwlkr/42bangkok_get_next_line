/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   man_main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panoma <panoma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 19:36:23 by panoma            #+#    #+#             */
/*   Updated: 2023/06/30 22:24:53 by panoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main(void)
{
	int		fd;
	char	*s;

	fd = open("tests/big_line_no_nl", O_RDONLY);
	printf("fd :%d\n", fd);
	if (fd > 2)
	{
		while (1)
		{
			s = get_next_line(fd);
			if (!s)
				break ;
			printf("%s", s);
			free(s);
		}
		close (fd);
	}
}
