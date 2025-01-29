/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlemerci <mlemerci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 16:50:54 by mlemerci          #+#    #+#             */
/*   Updated: 2025/01/14 18:57:43 by mlemerci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int main(int argc, char **argv)
{
    int i = 0;
    
    if(argc == 4)
    {
        while(argv[1][i])
        {
            if (argv[1][i] == argv[2][0])
                write(1, &argv[3][0], 1);
            else
                write(1, &argv[1][i], 1);
            i++;
        }
    }
    else
        write(1, "\n", 1);
}