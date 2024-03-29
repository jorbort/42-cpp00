/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgebortolotti <jorgebortolotti@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 17:49:23 by jorgebortol       #+#    #+#             */
/*   Updated: 2024/01/03 09:45:01 by jorgebortol      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "program.h"

int	main(int argc, char **argv)
{
	int i = 1;

	if (argc == 1)
	{
		cout << "* LOUD AND UNBEARABLE NOISE *" << "\n";
	}
	else if (argc > 1)
	{
		while (argv[i])
		{
			for (size_t j = 0; argv[i][j] != '\0'; j++)
					cout << (char)toupper(argv[i][j]);
			cout << ' ';
			i++;
		}
		cout << "\n";
	}
	return (0);
}