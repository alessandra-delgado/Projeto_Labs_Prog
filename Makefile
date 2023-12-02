CC = gcc
TARGET_EXEC ?= execute.exe
CONFIG_NAME ?= doxyfile

BUILD_DIR ?= ./build
SRC_DIRS ?= ./src
DOCS_DIR = ./docs
LIBS = -lgmp -lm

SRCS := $(shell find $(SRC_DIRS) -name *.c)
OBJS := $(SRCS:%.c=$(BUILD_DIR)/%.o)
DEPS := $(OBJS:.o=.d)


#compile, with object files as dependencies
$(BUILD_DIR)/$(TARGET_EXEC): $(OBJS)
	$(CC) $(OBJS) -o $@ $(LIBS)


#make build directory, if it doesn't exist; create object files
$(BUILD_DIR)/%.o: %.c
	$(MKDIR_P) $(dir $@)
	$(CC) -c $< -o $@



.PHONY: clean

execute: $(BUILD_DIR)/$(TARGET_EXEC)
	$(BUILD_DIR)/$(TARGET_EXEC) $(ARGS)

docs: $(BUILD_DIR)/$(TARGET_EXEC)
	@echo Building Docs
	@doxygen

clean:
	$(RM) -r $(BUILD_DIR)

-include $(DEPS)

MKDIR_P ?= mkdir -p