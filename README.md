# codeblocks-sming-wizard
Wizard for Code::Blocks to create Sming ESP8266 project

# Installation

* Enter the user wizard location, e.g.:

	`mkdir -p ~/.local/share/codeblocks/templates/wizard`

    `cd ~/.local/share/codeblocks/templates/wizard`
	
* Clone the repository to directory 'sming':

    `git clone https://github.com/riban-bw/codeblocks-sming-wizard sming`

* Edit Code::Blocks startup script (can be done within Code:Blocks using Settings->Edit startup script menu):

* *	Add:
	
	`RegisterWizard(wizProject,     _T("sming"),        _T("Sming project"),         _T("Embedded Systems"));`

# Usage
	
* Select "New project"
* Select "Sming"
* Populate wizard

Skeleton project created with:

* src/application.cpp
* include/application.h
* include/user_config.h
* Makefile
* spiffs/README.txt

Build targets:

* build (all)
* flash
* flashinit
* spiffs_update

Ensure SMING_HOME and ESP_HOME are set and valid - this may be done by:

* Menu Settings->Environment...
* Environmental Variables window
* Create envvar set called "Sming" (optional)
* Add SMING_HOME = path-to-Sming, e.g. /home/riban-bw/Sming/Sming
* Add ESP_HOME = path-to-ESP_HOME, e.g. /home/riban-bw/esp-sdk
* Note: Use POSIX style path for cygwin

This may also be set within the operating system.

For Autocomplete to work for all Sming classes including libraries:

* Edit Project Properties.
* Add to "C/C++ parser options"
  - $(#SMING)/
  - $(#SMING/third-party)/rboot
  -	$(#SMING/third-party)/rboot/appcode
  -	$(#SMING/third-party)/spiffs/src
* Add Global Variable "SMING" to Code::Blocks, pointing to the Sming base directory, e.g. D:\Sming\Sming (note: This can't use $SMING_HOME on cygwin because path needs to be in Windows format, not POSIX format)

(Autocomplete configuration should be added by the wizard but an [issue](https://sourceforge.net/p/codeblocks/tickets/584/) with Code::Blocks is currently blocking this.)
