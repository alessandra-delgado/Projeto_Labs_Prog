.PHONY: all run clean

CC = gcc
EXE_NAME ?= execute.exe
#CONFIG_NAME ?= doxyfile

BUILD_DIR ?= ./build
SRC_DIRS ?= src
DOCS_DIR = ./docs
EXE ?= $(BUILD_DIR)/$(EXE_NAME)

MKDIR_P ?= mkdir -p
LIBS = -lgmp -lm

SRCS := $(shell find $(SRC_DIRS) -name *.c)
OBJS := $(SRCS:%.c=$(BUILD_DIR)/%.o)

all: run

run: $(EXE)
	$< $(ARGS)

# COMPILE =====================

$(EXE): $(OBJS)
	$(CC) $^ -o $@ $(LIBS)

$(BUILD_DIR)/%.o : %.c
	$(MKDIR_P) $(dir $@)
	$(CC) -c $< -o $@
	
# =============================

docs: $(OBJS)
	@echo Building Docs
	@doxygen

clean:
	rm -r $(BUILD_DIR)
	@echo Ficheiros removidos.