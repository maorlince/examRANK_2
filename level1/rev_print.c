/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlemerci <mlemerci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 18:43:52 by mlemerci          #+#    #+#             */
/*   Updated: 2025/01/29 19:11:57 by mlemerci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int main(int argc, char **argv)
{
    if (argc != 2)
        return(write(1, "\n", 1));

    int i = 0;

    while (argv[1][i])
        i++;
    
    i--;
		char *res;
		int j = 0;
		
    while (argv[1][i])
        {
            res[j] = argv[1][i];
            i--;
			j++;
        }
		res[j]= 0;
		
         write(1, res, j);
}