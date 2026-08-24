# =============================================================================
# CONFIGURATION
# =============================================================================

CC := gcc

CFLAGS := \
	-std=c99 \
	-Wall \
	-Wextra \
	-Wpedantic \
	-g

BUILD_DIR := build

# =============================================================================
# MAKE
# =============================================================================

.DEFAULT_GOAL := help

.PHONY: \
	run \
	build \
	check \
	clean \
	help

# =============================================================================
# BUILD
# =============================================================================

build:
	@if [ -z "$(FILE)" ]; then \
		echo "FILE is required."; \
		echo "Example: make build FILE=01_basics/01_hello.c"; \
		exit 1; \
	fi

	@mkdir -p $(BUILD_DIR)

	@echo "==> Compiling $(FILE)..."

	@$(CC) $(CFLAGS) \
		$(FILE) \
		-o $(BUILD_DIR)/program

# =============================================================================
# RUN
# =============================================================================

run: build
	@echo ""
	@echo "==> Running..."
	@echo ""
	@./$(BUILD_DIR)/program

# =============================================================================
# CHECK
# =============================================================================

check:
	@if [ -z "$(FILE)" ]; then \
		echo "FILE is required."; \
		echo "Example: make check FILE=01_basics/01_hello.c"; \
		exit 1; \
	fi

	@echo "==> Checking $(FILE)..."

	@$(CC) $(CFLAGS) \
		-fsyntax-only \
		$(FILE)

	@echo "No compiler errors."

# =============================================================================
# CLEAN
# =============================================================================

clean:
	@echo "Cleaning build..."
	rm -f $(BUILD_DIR)/program

# =============================================================================
# HELP
# =============================================================================

help:
	@echo ""
	@echo "C Classics"
	@echo "=========="
	@echo ""
	@echo "Build"
	@echo "  make build FILE=01_basics/01_hello.c"
	@echo ""
	@echo "Run"
	@echo "  make run FILE=01_basics/01_hello.c"
	@echo ""
	@echo "Check"
	@echo "  make check FILE=01_basics/01_hello.c"
	@echo ""
	@echo "Clean"
	@echo "  make clean"
	@echo ""
