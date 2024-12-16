C_SOURCES	= $(shell find . -name "*.c")
C_OBJECTS	= $(patsubst %.c, %.o, $(C_SOURCES))
S_SOURCES	= $(shell find . -name "*.s")
S_OBJECTS	= $(patsubst %.s, %.o, $(S_SOURCES))

CC			= gcc
LD			= ld
ASM			= nasm
RM			= rm

C_FLAGS		= -c -I include -m32 -O3 -g -DNDEBUG -nostdinc -fno-pic \
              -fno-builtin -fno-stack-protector

LD_FLAGS	= -m elf_i386 --strip-all -e main
ASM_FLAGS	= -f elf -g -F stabs

all: output

.c.o:
	@printf "\033[1;32m[Build]\033[0m Compiling Code Files $< ...\n"
	@$(CC) $(C_FLAGS) $< -o $@

.s.o:
	@printf "\033[1;32m[Build]\033[0m Compiling Assembly $< ...\n"
	@$(ASM) $(ASM_FLAGS) $<

output: $(S_OBJECTS) $(C_OBJECTS)
	@echo
	@printf "\033[1;32m[Link]\033[0m Linking...\n"
	@$(LD) $(LD_FLAGS) $(S_OBJECTS) $(C_OBJECTS) $(OTHER_OBJECTS) -o output.elf
	@printf "\033[1;32m[Done]\033[0m Compilation complete.\n"

.PHONY:clean
clean:
	$(RM) -f $(S_OBJECTS) $(C_OBJECTS) output.elf
