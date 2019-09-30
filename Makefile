OBJS	= testa_velha.o velha.o
SOURCE	= testa_velha.cpp velha.cpp
HEADER	= catch2.hpp velha.hpp
OUT	= velha_teste
CC	 = g++
FLAGS	 = -g -c -Wall
LFLAGS	 = 

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

testa_velha.o: testa_velha.cpp
	$(CC) $(FLAGS) testa_velha.cpp -std=c++11

velha.o: velha.cpp
	$(CC) $(FLAGS) velha.cpp -std=c++11


clean:
	rm -f $(OBJS) $(OUT)
	
