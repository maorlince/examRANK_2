/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlemerci <mlemerci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 20:20:47 by mlemerci          #+#    #+#             */
/*   Updated: 2025/01/15 21:10:01 by mlemerci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    if (argc != 2)
        write(1, "\n", 1);

    int i = 0;
    int j = 0;

    while(argv[1][i] && (argv[1][i] <= 122 && argv[1][i] >= 97))
    {
        j = argv[1][i] + 1 +((109 - argv[1][i])* 2);
        write(1, &j, 1);
        i++;
    }
     while(argv[1][i] && (argv[1][i] <= 90 && argv[1][i] >= 65))
    {
        j = argv[1][i] + 1 +((77 - argv[1][i])* 2);
        write(1, &j, 1);
        i++;
    }
    write(1, "\n", 1);
}