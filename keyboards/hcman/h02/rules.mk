SRC = ../../../drivers/led/sn32/matrix_sn32f24xx.c
SRC += rand.c

MCU = SN32F268F

AUDIO_ENABLE = no
LTO_ENABLE = yes
MAGIC_ENABLE = yes
MAGIC_KEYCODE_ENABLE = yes
BOOTMAGIC_ENABLE = yes # Virtual DIP switch configuration   
EXTRAKEY_ENABLE = yes    # Audio control and System control
NKRO_ENABLE = yes        # USB Nkey Rollover

CUSTOM_MATRIX = yes
LED_MATRIX_ENABLE = yes
LED_MATRIX_DRIVER = SN32F26x

USE_PROCESS_STACKSIZE = 0x1E0
USE_EXCEPTIONS_STACKSIZE = 0xF0
