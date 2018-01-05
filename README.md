# codeblocks-sming-wizard
Wizard for Code::Blocks to create Sming ESP8266 project

# Installation

1. Enter the default wizard location, e.g.:

    `cd /opt/codeblocks/share/codeblocks/templates/wizard`

2. Clone the repository to directory 'sming':

    `git clone https://github.com/riban-bw/codeblocks-sming-wizard sming`

# Usage
	
Select "New project"
Select "Sming"
Populate:
	Project name
	Base folder
	Project filename (auto populated)
	Full path (auto populated)
Skeleton project created with:
	src/application.cpp
	include/application.h
	include/user_config.h (is this required?)
	Makefile
	Makefile-user.mk (is this required?)
Build targets:
	build (all)
	flash
	flashinit
Autocomplete works for all Sming classes including libraries

Ensure SMING_HOME and ESP_HOME are set and valid - this may be done by:
	Menu Settings->Environment...
	Environmental Variables window
	Create envvar set called "Sming" (optional)
	Add SMING_HOME = path-to-Sming, e.g. D:\PJ\SmingHub-riban-bw\Sming\Sming
	Add ESP_HOME = path-to-ESP_HOME, e.g. D:\bin\esp-sdk
This may also be set within the operating system.