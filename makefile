run: main.o LinkList.o Node.o
  g++ main.o LinkList.o Node.o -o run

main.o: main.cpp
  g++ -c main.cpp

Node.o: Node.cpp Node.h
  g++ -c Node.cpp

LinkList.o: LinkList.cpp LinkList.h
  g++ -c LinkList.cpp 

clean:
  -rm.*o 