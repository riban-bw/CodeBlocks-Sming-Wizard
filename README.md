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
	
	`RegisterWizard(wizProject,     _T("Sming"),        _T("Sming project"),         _T("Embedded Systems"));`

# Usage
	
* Select "New project"
* Select "Sming"
* Populate wizard

Skeleton project created with:

* src/application.cpp
* include/application.h
* include/user_config.h (is this required?)
* Makefile
* Makefile-user.mk (is this required?)

Build targets:

* build (all)
* flash
* flashinit

Ensure SMING_HOME and ESP_HOME are set and valid - this may be done by:

* Menu Settings->Environment...
* Environmental Variables window
* Create envvar set called "Sming" (optional)
* Add SMING_HOME = path-to-Sming, e.g. D:\PJ\SmingHub-riban-bw\Sming\Sming
* Add ESP_HOME = path-to-ESP_HOME, e.g. D:\bin\esp-sdk

This may also be set within the operating system.

For Autocomplete to work for all Sming classes including libraries:

* Edit Project Properties.
* Add to "C/C++ parser options"
  - $(#SMING)/
  - $(#SMING/third-party)/rboot
  -	$(#SMING/third-party)/rboot/appcode
  -	$(#SMING/third-party)/spiffs/src

(Autocomplete configuration should be added by the wizard but an issue with Code::Blocks is currently blocking this.)
