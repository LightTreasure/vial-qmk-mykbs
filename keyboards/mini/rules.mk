# MCU name
MCU = atmega32u4

# Bootloader selection
#   Teensy       halfkay
#   Pro Micro    caterina
#   Atmel DFU    atmel-dfu
#   LUFA DFU     lufa-dfu
#   QMK DFU      qmk-dfu
#   ATmega32A    bootloadHID
#   ATmega328P   USBasp
BOOTLOADER = caterina       

# Special features
# EXTRAKEY_ENABLE   - Enable Audio control and System control keys
# NKRO_ENABLE       - Enable N-Key Rollover
# CONSOLE_ENABLE    - Enable Console for debug
# COMMAND_ENABLE    - Commands for debug and configuration
# MOUSEKEY_ENABLE   - Enable Mouse control keys
EXTRAKEY_ENABLE 	= yes
NKRO_ENABLE 		  = yes
CONSOLE_ENABLE		= yes
COMMAND_ENABLE		= yes
MOUSEKEY_ENABLE 	= yes
