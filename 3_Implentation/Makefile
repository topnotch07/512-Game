PROJ_NAME = 512
TEST_PROJ_NAME = Test_$(PROJ_NAME)

SRC =src/display.c \
src/movements.c \
src/wait.c \
src/startend.c 

COV_SRC = test.c

TEST_SRC = src/display.c \
src/movements.c \
src/wait.c \
src/startend.c \
test/test.c \
unity/unity.c 
INC_H = inc
INC_T = unity

TEST_OUTPUT = $(BUILD)/Test_$(PROJECT_NAME).out

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
	./$(TEST_OUTPUT)

analyze: test memcheck staticcheck coverage sanitize_check

memcheck:
	valgrind ./$(TEST_OUTPUT)

cppcheck:
	cppcheck --enable=all $(SRC) 512.c
	
sanitize_check:
	gcc -fsanitize=address -fno-omit-frame-pointer $(TEST_SRC) $(INC) -o $(TEST_OUTPUT) 
	./$(TEST_OUTPUT)
	
debug:
	gcc -I $(INC_H) $(SRC) 512.c -g -o $(PROJ_NAME).$(EXEC)
	gdb $(PROJ_NAME).$(EXEC)

valgrind:
	valgrind ./$(TEST_PROJ_NAME).$(EXEC)
	
coverage:$(TEST_SRC)
	gcc -fprofile-arcs -ftest-coverage $(TEST_SRC) $(INC) -o $(TEST_OUTPUT) $(INCLUDE_LIBS)
	./$(TEST_OUTPUT)
	gcov -a 512.c


clean:
	rm -rf $(BUILD) $(DOCUMENTATION_OUTPUT) *.gcda *.gcno *.gcov

$(BUILD):
	mkdir build
