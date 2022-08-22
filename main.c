/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmassiah <rmassiah@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 10:06:24 by rmassiah          #+#    #+#             */
/*   Updated: 2022/07/15 15:41:49 by rmassiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include <fcntl.h>
#include "get_next_line.h"

int main (void)
{
	int fd;
	char *result;
	int i;

	fd = open("big_line_no_nl", O_RDONLY);
	i = 0;
	while(i < 5)
	{
		result = get_next_line(fd);
		i++;
		printf("%s",result);
	}

	close(fd);
	return 0;
}
