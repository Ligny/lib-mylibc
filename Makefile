CC = gcc

NAME = libmylibc.a

SRC_DIR = src
BUILD_DIR = build
TEST_DIR = tests

SRCS = $(shell find $(SRC_DIR) -name "*.c")
TESTS = $(shell find $(TEST_DIR) -name "*.c")

OBJS = $(SRCS:$(SRC_DIR)/%.c=$(BUILD_DIR)/%.o)

CFLAGS = -I ./include/ -I /opt/homebrew/Cellar/criterion/2.4.2_1/include
CFLAGS += -W -Wall -Wextra -fprofile-arcs -ftest-coverage -g

LDFLAGS = -L /opt/homebrew/Cellar/criterion/2.4.2_1/lib -lcriterion --coverage

GREEN = "\033[0;32m"
RED = "\033[0;31m"
BLUE = "\033[1;34m"
RESET = "\033[0m"

all: $(NAME)

$(NAME): $(OBJS)
	@echo $(GREEN)"[SUCCESS] Creating $(NAME)"$(RESET)
	ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(dir $@)
	@echo $(BLUE)"[INFO] Compiling $<"$(RESET)
	$(CC) -o $@ -c $< $(CFLAGS)

clean:
	@echo $(RED)"[INFO] Removing object files and coverage data"$(RESET)
	rm -rf $(BUILD_DIR)
	rm -f *.gcno *.gcda *.gcov
	rm -rf coverage_report
	rm -f test coverage.info
	rm -rf *.dSYM

fclean: clean
	@echo $(RED)"[INFO] Removing $(NAME)"$(RESET)
	rm -f $(NAME)

re: fclean all

tests_run: $(OBJS)
	@mkdir -p $(BUILD_DIR)
	$(CC) -o test $(TESTS) $(OBJS) $(CFLAGS) $(LDFLAGS)
	-./test
	rm -f test

coverage: tests_run
	@echo $(BLUE)"[INFO] Generating coverage report"$(RESET)
	lcov --capture --directory . --output-file coverage.info
	genhtml coverage.info --output-directory coverage_report
	@echo $(GREEN)"[SUCCESS] Coverage report generated in coverage_report/index.html"$(RESET)

.PHONY: all clean fclean re tests_run coverage