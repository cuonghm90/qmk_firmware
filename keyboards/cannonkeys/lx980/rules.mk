# BOARD
BOARD = STM32F103C8_MINIMAL_CUSTOM
# MCU name
MCU = STM32F103

# Bootloader selection
BOOTLOADER = stm32duino

# project specific files
#VPATH += keyboards/cannonkeys/bluepill
SRC +=	keyboard.c

# Required for functionality with Bluetooth
#NO_USB_STARTUP_CHECK = yes

BOOTMAGIC_ENABLE = lite	# Virtual DIP switch configuration
MOUSEKEY_ENABLE = no	# Mouse keys
EXTRAKEY_ENABLE = yes	# Audio control and System control
CONSOLE_ENABLE = yes	# Console for debug
COMMAND_ENABLE = yes    # Commands for debug and configuration
SLEEP_LED_ENABLE = yes  # Breathing sleep LED during USB suspend
NKRO_ENABLE = yes	      # USB Nkey Rollover
BACKLIGHT_ENABLE = no
RGBLIGHT_ENABLE = yes
#WS2812_DRIVER = spi

# Enter lower-power sleep mode when on the ChibiOS idle thread
OPT_DEFS += -DCORTEX_ENABLE_WFI_IDLE=TRUE
