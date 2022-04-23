CC=gcc

C_FILES = SoundImagery.c
OUTPUT = si

$(OUTPUT): FORCE
	$(CC) -o $@ $(C_FILES) -Os

build: $(OUTPUT)

run: $(OUTPUT)
	./$^

clean: FORCE
	rm $(OUTPUT)

FORCE:
