# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    find_nicolas_bauer.sh                              :+:    :+:             #
#                                                      +:+                     #
#    By: jlensing <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2019/08/15 21:24:36 by jlensing       #+#    #+#                 #
#    Updated: 2019/08/16 15:50:19 by jlensing      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

grep -viw "bomber" $1 | grep -iw "nicolas" | grep -iw "bauer" | rev | cut -f 2 | rev