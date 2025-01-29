/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlemerci <mlemerci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 21:19:04 by mlemerci          #+#    #+#             */
/*   Updated: 2025/01/15 21:35:48 by mlemerci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int main(int argc, char **argv)
{
    int i = 0;
    char c = '0';
    
    while(argv[1][i])
    {
        if (argv[1][i] <= 90 && argv[1][i] >= 65)
            {
                c = argv[1][i] + 32;
                write(1, "_", 1); 
                write(1, &c, 1);
            }
        else
            write(1, &argv[1][i], 1);
        i++;
    }
}