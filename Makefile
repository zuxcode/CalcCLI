


# =========================================================
# Project Configuration
# =========================================================
CC := gcc
TARGET := calccli

SRC_DIR := src
BUILD_DIR := build
BIN_DIR := bin

SRCS := $(wildcard $(SRC_DIR)/*.c)
OBJS := $(patsubst $(SRC_DIR)/%.c,$(BUILD_DIR)/%.o,$(SRCS))
DEPS := $(OBJS:.o=.d)

# =========================================================
# Compiler Flags
# =========================================================
COMMON_FLAGS := -Wall -Wextra -Werror -std=c11
DEBUG_FLAGS := -g -O0 -DDEBUG
RELEASE_FLAGS := -O2 -DNDEBUG

LDFLAGS :=

# Default build mode
MODE ?= debug

ifeq ($(MODE),release)
    CFLAGS := $(COMMON_FLAGS) $(RELEASE_FLAGS)
else
    CFLAGS := $(COMMON_FLAGS) $(DEBUG_FLAGS)
endif

# =========================================================
# Targets
# =========================================================
.PHONY: all debug release clean run rebuild help

all: $(BIN_DIR)/$(TARGET)

debug:
	$(MAKE) MODE=debug

release:
	$(MAKE) MODE=release

# Link final executable
$(BIN_DIR)/$(TARGET): $(OBJS) | $(BIN_DIR)
	$(CC) $(CFLAGS) $(OBJS) -o $@ $(LDFLAGS)

# Compile source files into object files
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) -MMD -MP -c $< -o $@

# Create directories if they do not exist
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

$(BIN_DIR):
	mkdir -p $(BIN_DIR)

# Include auto-generated dependency files
-include $(DEPS)

run: all
	./$(BIN_DIR)/$(TARGET)

rebuild: clean all

clean:
	rm -rf $(BUILD_DIR) $(BIN_DIR)

help:
	@echo "Available commands:"
	@echo "  make            -> build in debug mode"
	@echo "  make debug      -> build debug version"
	@echo "  make release    -> build optimized release version"
	@echo "  make run        -> build and run"
	@echo "  make clean      -> remove build artifacts"
	@echo "  make rebuild    -> clean and rebuild"