# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    count_files.sh                                     :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amorilla <amorilla@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/24 18:03:07 by amorilla          #+#    #+#              #
#    Updated: 2022/02/24 18:05:20 by amorilla         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh
find . -type f -o -type d| wc -l |sed 's/ //g'