/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlemerci <mlemerci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 17:04:41 by mlemerci          #+#    #+#             */
/*   Updated: 2025/01/15 18:39:06 by mlemerci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<unistd.h>

int main(int argc, char **argv)
{
    if (argc != 2)
        return(write(1, "\n", 1));

    int i = 0;
    char c;
    
    
    while(argv[1] && argv[1][i] <= 122 && argv[1][i] >= 97)
    {
        if( argv[1][i] <= 'm')
        {
            c = argv[1][i] + 13;
            write(1, &c, 1);
            i++;
        }
        if( argv[1][i] > 'm')
        {
            c = argv[1][i] - 13;
            write(1, &c, 1);
            i++;
        }
    }
    
     while(argv[1] && argv[1][i] <= 90 && argv[1][i] >= 65)
    {
        if( argv[1][i] <= 'm')
        {
            c = argv[1][i] + 13;
            write(1, &c, 1);
            i++;
        }
        if( argv[1][i] > 'm')
        {
            c = argv[1][i] - 13;
            write(1, &c, 1);
            i++;
        }
    }
    
}