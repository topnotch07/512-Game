PROJ_NAME = game
TEST_PROJ_NAME = Test_$(PROJ_NAME)

BUILD = build

$(BUILD):
	mkdir build

SRC =src/display.c \
src/movements.c \
src/wait.c \
src/startend.c 

COV_SRC = test.c

INCLUDE_LIBS = -lcunit

TEST_SRC = src/display.c \
src/movements.c \
src/wait.c \
src/startend.c \
test/test.c \
unity/unity.c 
INC_H = inc
INC_T = unity

TEST_OUTPUT = $(BUILD)/$(TEST_PROJ_NAME).out

PROJECT_OUTPUT = $(BUILD)/$(PROJECT_NAME).out

DOCUMENTATION_OUTPUT = documentation/html

$(PROJECT_NAME):all


.PHONY: run clean test doc all

all: $(SRC) $(BUILD)
	gcc -I $(INC_H) $(SRC) 512.c -o $(PROJECT_OUTPUT).out
	
run:$(PROJECT_NAME)
	./$(PROJ_OUTPUT).out
	
doc:
	make -C ./documentation

test:
	gcc -I $(INC_H) -I $(INC_T) $(TEST_SRC) $(SRC) -o $(TEST_OUTPUT)


analyze: test memcheck staticcheck coverage sanitize_check

memcheck:
	valgrind ./$(TEST_OUTPUT)

cppcheck:
	cppcheck --enable=all $(SRC) 512.c
	
sanitize_check:
	gcc -fsanitize=address -fno-omit-frame-pointer $(TEST_SRC) $(INC) -o $(TEST_OUTPUT) 
	
debug:
	gcc -I $(INC_H) $(SRC) 512.c -g -o $(PROJ_NAME).out
	gdb $(PROJ_NAME).out

valgrind:
	chmod a+x $(TEST_PROJ_NAME)
	valgrind ./$(TEST_PROJ_NAME)
	
coverage:$(TEST_SRC)
	gcc -fprofile-arcs -ftest-coverage $(TEST_SRC) $(INC) -o $(TEST_OUTPUT) $(INCLUDE_LIBS)
	gcov -a 512.c


clean:
	rm -rf $(BUILD) $(DOCUMENTATION_OUTPUT) *.gcda *.gcno *.gcov

