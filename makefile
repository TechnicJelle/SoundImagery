FLAGS = -Os -I. -L.
FLAGS += -Wl,--no-warn-search-mismatch,-rpath,.
LIBS = -lbass
OUTPUT = si

CC=gcc

C_FILES = SoundImagery.c

$(OUTPUT): FORCE
	$(CC) $(FLAGS) $(C_FILES) $(LIBS) -o $(OUTPUT)

build: $(OUTPUT)

run: $(OUTPUT)
	./$^

clean: FORCE
	rm $(OUTPUT)

FORCE:
