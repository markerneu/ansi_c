cmake_minimum_required(VERSION 3.13)
project(ansi_c C)

set(CMAKE_C_STANDARD 11)

add_executable(factor src/factor.c)

add_executable(fibonacci src/fibonacci.c)

add_executable(hotel src/usehotel.c src/hotel.c )

add_executable(swap3 src/swap3.c)


