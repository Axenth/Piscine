# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    defuse.sh                                          :+:    :+:             #
#                                                      +:+                     #
#    By: jlensing <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2019/08/15 21:40:02 by jlensing       #+#    #+#                 #
#    Updated: 2019/08/15 22:08:06 by jlensing      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

touch -A -000001 bomb.txt | stat -f%a bomb.txt;