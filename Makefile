.PHONY: all run clean

CC = gcc
EXE ?= execute.exe
#CONFIG_NAME ?= doxyfile

BUILD_DIR ?= ./build
SRC_DIRS ?= src
DOCS_DIR = ./docs
EXE_DIR ?= $(BUILD_DIR)/$(EXE)

MKDIR_P ?= mkdir -p
LIBS = -lgmp -lm

SRCS := $(shell find $(SRC_DIRS) -name *.c)
OBJS := $(SRCS:%.c=$(BUILD_DIR)/%.o)

all: run

run: $(EXE_DIR)
	$< $(ARGS)

# =============================

$(EXE_DIR): $(OBJS)
	$(CC) $^ -o $@ $(LIBS)

$(BUILD_DIR)/%.o : %.c
	$(MKDIR_P) $(dir $@)
	$(CC) -c $< -o $@
	
# =============================

docs:
	@echo Building Docs
	@doxygen

clean:
	$(RM) -r $(BUILD_DIR)
