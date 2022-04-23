#include <stdio.h>
#include "bass.h"

void printi(int num) {
	printf("%d\n", num);
}

void prints(char string[]) {
	printf("%s\n", string);
}

int main() {
	prints("Starting up...");
	if(HIWORD(BASS_GetVersion()) == BASSVERSION) {
		prints("[BASS] Correct version loaded!");
	} else {
		prints("[BASS] Incorrect version loaded!");
	}

	if(BASS_Init(-1, 44100, 0, NULL, NULL)) {
		prints("[BASS] Successfully initialised!");
	} else {
		printi(BASS_ErrorGetCode());
	}

	int bwoosh = BASS_StreamCreateFile(FALSE, "bwoosh.wav", 0, 0, BASS_SAMPLE_LOOP | BASS_STREAM_AUTOFREE);
	if(bwoosh == 0)
		printi(BASS_ErrorGetCode());

	BASS_ChannelSetAttribute(bwoosh, BASS_ATTRIB_VOL, 0.1);

	if(BASS_ChannelPlay(bwoosh, FALSE)) {
		prints("[BASS] Sound playing!");
	} else {
		printi(BASS_ErrorGetCode());
	}

	prints("Press the ENTER key make it shut up");
	char temp;
	scanf("%c",&temp);

	return 0;
}
