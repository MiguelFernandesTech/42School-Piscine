/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmarti <migmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 10:37:11 by migmarti          #+#    #+#             */
/*   Updated: 2022/10/13 11:03:50 by migmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	if(argc == 2)
	{
		while(argv[1][i] != '\0' )
		{
			if(argv[1][i] == 'a')
			{
				write(1, "a", 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
}
