all: list1

list1: list1.o list.o
  g++ -o $@ $^

# Generec way to compile all .cpp files
.o: .cpp
  g++ -o $@ $^

clean: 
  rm -f list?