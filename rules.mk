AUDIO_ENABLE = no
MIDI_ENABLE = yes
CONSOLE_ENABLE = no
COMMAND_ENABLE = no

ifeq ($(strip $(AUDIO_ENABLE)), yes)
    SRC += muse.c
endif
