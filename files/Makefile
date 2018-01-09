#####################################################
### Project configuration                          ##
### Values may be set using enviromental variables ##
#####################################################

## COM_PORT: Serial port, required to flash firmware
COM_PORT ?= /dev/ttyS4

## COM_SPEED: Serial port baud rate
COM_SPEED ?= 115200

## COM_SPEED_ESPTOOL: Serial port baud rate used for flashing (defaults to COM_SPEED)
COM_SPEED_ESPTOOL ?= 115200

## DISABLE_SPIFFS: Set to 1 to disable SPIFFS file system
DISABLE_SPIFFS = 1
SPIFF_FILES = spiffs

## RBOOT_ENABLED: Set to 1 to use rboot boot loader else do not use boot loader
RBOOT_ENABLED = 0

## MODULES: Source directories separated by space
MODULES = src

## EXTRA_INCDIR: Include directories separated by space
EXTRA_INCDIR = include

## VERBOSE: Set to 1 for more verbose build information
VERBOSE = 0

## ESP_HOME: Path where ESP tools and SDK are located.
ESP_HOME ?= ~/Sming/esp-toolkit/sdk

## SMING_HOME Path where Sming framework is located.
SMING_HOME ?= ~/Sming/Sming

## TERMINAL: Command to launch serial terminal interface with ESP8266
ifneq ($(filter CYGWIN%,$(shell uname -s)),)
TERMINAL     ?= mintty -t "ESP8266 Terminal" --bg 0,0,128 python -m serial.tools.miniterm $(COM_PORT) $(COM_SPEED_SERIAL) $(COM_OPTS)
endif

# We need to make sure SMING_HOME and ESP_HOME variables are set correctly.
# Set these above or use enviromental variables to set globally.

ifeq ("$(wildcard $(ESP_HOME)/sdk/Makefile)","")
$(error ESP SDK Makefile not found in $(ESP_HOME)/sdk. Please check that ESP_HOME is set to correct value)
endif

# Include main Sming Makefile
ifeq ($(RBOOT_ENABLED), 1)
ifeq ("$(wildcard $(SMING_HOME)/Makefile-rboot.mk)","")
$(error Sming Makefile not found in $(SMING_HOME). Please check that SMING_HOME is set to correct value)
endif
include $(SMING_HOME)/Makefile-rboot.mk
else
ifeq ("$(wildcard $(SMING_HOME)/Makefile-project.mk)","")
$(error Sming Makefile not found in $(SMING_HOME). Please check that SMING_HOME is set to correct value)
endif
include $(SMING_HOME)/Makefile-project.mk
endif

# Friendly names for targets (useful to display in IDE)
build: all
upload: flash