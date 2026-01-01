SRC := src/
BUILD := build/
OBJECT := $(patsubst $(SRC)%.c,%.o, $(wildcard $(SRC)*.c)) 


exe: $(OBJECT)
	cd $(BUILD) && gcc $^ -o ../exe

%.o:$(SRC)%.c
	gcc -c $^ -o $(BUILD)$@