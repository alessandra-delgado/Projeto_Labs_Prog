.PHONY: all run docs clean

CC = gcc
EXE ?= execute.exe

BUILD_DIR ?= ./build
SRC_DIR ?= src
DOCS = doxygen
EXE_DIR ?= $(BUILD_DIR)/$(EXE)

MKDIR_F ?= -p
LIBS = -lgmp -lm

SRCS := $(shell find $(SRC_DIR) -name *.c)
OBJS := $(SRCS:%.c=$(BUILD_DIR)/%.o)

all: run docs

run: $(EXE_DIR)
	./$< $(ARGS)

# COMPILE =====================

$(EXE_DIR): $(OBJS)
	$(CC) $^ -o $@ $(LIBS)

$(BUILD_DIR)/%.o : %.c
	mkdir $(MKDIR_F) $(dir $@)
	$(CC) -c $< -o $@
	
# =============================

docs:
	@echo A gerar ficheiros de documentação. ======================================
	@$(DOCS)
	@echo Ficheiros de documentação gerados. ======================================

clean:
	rm -r $(BUILD_DIR)
	@echo Ficheiros removidos.