/* 
	Editor: http://www.visualmicro.com
	        visual micro and the arduino ide ignore this code during compilation. this code is automatically maintained by visualmicro, manual changes to this file will be overwritten
	        the contents of the Visual Micro sketch sub folder can be deleted prior to publishing a project
	        all non-arduino files created by visual micro and all visual studio project or solution files can be freely deleted and are not required to compile a sketch (do not delete your own code!).
	        note: debugger breakpoints are stored in '.sln' or '.asln' files, knowledge of last uploaded breakpoints is stored in the upload.vmps.xml file. Both files are required to continue a previous debug session without needing to compile and upload again
	
	Hardware: Arduino Mega 2560 or Mega ADK, Platform=avr, Package=arduino
*/

#ifndef _VSARDUINO_H_
#define _VSARDUINO_H_
#define __AVR_ATmega2560__
#define ARDUINO 105
#define ARDUINO_MAIN
#define __AVR__
#define __avr__
#define F_CPU 16000000L
#define __cplusplus
#define __inline__
#define __asm__(x)
#define __extension__
#define __ATTR_PURE__
#define __ATTR_CONST__
#define __inline__
#define __asm__ 
#define __volatile__

#define __builtin_va_list
#define __builtin_va_start
#define __builtin_va_end
#define __DOXYGEN__
#define __attribute__(x)
#define NOINLINE __attribute__((noinline))
#define prog_void
#define PGM_VOID_P int
            
typedef unsigned char byte;
extern "C" void __cxa_pure_virtual() {;}
#include "C:\Program Files (x86)\Arduino\hardware\arduino\cores\arduino\arduino.h"
#include "C:\Program Files (x86)\Arduino\hardware\arduino\variants\mega\pins_arduino.h" 
#include "C:\repo\tinkerine-marlin-firmware\Marlin\Marlin.pde"
#include "C:\repo\tinkerine-marlin-firmware\Marlin\BlinkM.cpp"
#include "C:\repo\tinkerine-marlin-firmware\Marlin\BlinkM.h"
#include "C:\repo\tinkerine-marlin-firmware\Marlin\Configuration.h"
#include "C:\repo\tinkerine-marlin-firmware\Marlin\ConfigurationStore.cpp"
#include "C:\repo\tinkerine-marlin-firmware\Marlin\ConfigurationStore.h"
#include "C:\repo\tinkerine-marlin-firmware\Marlin\Configuration_adv.h"
#include "C:\repo\tinkerine-marlin-firmware\Marlin\DOGMbitmaps.h"
#include "C:\repo\tinkerine-marlin-firmware\Marlin\LiquidCrystalRus.cpp"
#include "C:\repo\tinkerine-marlin-firmware\Marlin\LiquidCrystalRus.h"
#include "C:\repo\tinkerine-marlin-firmware\Marlin\Marlin.h"
#include "C:\repo\tinkerine-marlin-firmware\Marlin\Marlin.ino"
#include "C:\repo\tinkerine-marlin-firmware\Marlin\MarlinSerial.cpp"
#include "C:\repo\tinkerine-marlin-firmware\Marlin\MarlinSerial.h"
#include "C:\repo\tinkerine-marlin-firmware\Marlin\Marlin_main.cpp"
#include "C:\repo\tinkerine-marlin-firmware\Marlin\Sd2Card.cpp"
#include "C:\repo\tinkerine-marlin-firmware\Marlin\Sd2Card.h"
#include "C:\repo\tinkerine-marlin-firmware\Marlin\Sd2PinMap.h"
#include "C:\repo\tinkerine-marlin-firmware\Marlin\SdBaseFile.cpp"
#include "C:\repo\tinkerine-marlin-firmware\Marlin\SdBaseFile.h"
#include "C:\repo\tinkerine-marlin-firmware\Marlin\SdFatConfig.h"
#include "C:\repo\tinkerine-marlin-firmware\Marlin\SdFatStructs.h"
#include "C:\repo\tinkerine-marlin-firmware\Marlin\SdFatUtil.cpp"
#include "C:\repo\tinkerine-marlin-firmware\Marlin\SdFatUtil.h"
#include "C:\repo\tinkerine-marlin-firmware\Marlin\SdFile.cpp"
#include "C:\repo\tinkerine-marlin-firmware\Marlin\SdFile.h"
#include "C:\repo\tinkerine-marlin-firmware\Marlin\SdInfo.h"
#include "C:\repo\tinkerine-marlin-firmware\Marlin\SdVolume.cpp"
#include "C:\repo\tinkerine-marlin-firmware\Marlin\SdVolume.h"
#include "C:\repo\tinkerine-marlin-firmware\Marlin\Servo.cpp"
#include "C:\repo\tinkerine-marlin-firmware\Marlin\Servo.h"
#include "C:\repo\tinkerine-marlin-firmware\Marlin\cardreader.cpp"
#include "C:\repo\tinkerine-marlin-firmware\Marlin\cardreader.h"
#include "C:\repo\tinkerine-marlin-firmware\Marlin\digipot_mcp4451.cpp"
#include "C:\repo\tinkerine-marlin-firmware\Marlin\dogm_font_data_marlin.h"
#include "C:\repo\tinkerine-marlin-firmware\Marlin\dogm_lcd_implementation.h"
#include "C:\repo\tinkerine-marlin-firmware\Marlin\fastio.h"
#include "C:\repo\tinkerine-marlin-firmware\Marlin\language.h"
#include "C:\repo\tinkerine-marlin-firmware\Marlin\motion_control.cpp"
#include "C:\repo\tinkerine-marlin-firmware\Marlin\motion_control.h"
#include "C:\repo\tinkerine-marlin-firmware\Marlin\pins.h"
#include "C:\repo\tinkerine-marlin-firmware\Marlin\planner.cpp"
#include "C:\repo\tinkerine-marlin-firmware\Marlin\planner.h"
#include "C:\repo\tinkerine-marlin-firmware\Marlin\qr_solve.cpp"
#include "C:\repo\tinkerine-marlin-firmware\Marlin\qr_solve.h"
#include "C:\repo\tinkerine-marlin-firmware\Marlin\speed_lookuptable.h"
#include "C:\repo\tinkerine-marlin-firmware\Marlin\stepper.cpp"
#include "C:\repo\tinkerine-marlin-firmware\Marlin\stepper.h"
#include "C:\repo\tinkerine-marlin-firmware\Marlin\temperature.cpp"
#include "C:\repo\tinkerine-marlin-firmware\Marlin\temperature.h"
#include "C:\repo\tinkerine-marlin-firmware\Marlin\thermistortables.h"
#include "C:\repo\tinkerine-marlin-firmware\Marlin\ultralcd.cpp"
#include "C:\repo\tinkerine-marlin-firmware\Marlin\ultralcd.h"
#include "C:\repo\tinkerine-marlin-firmware\Marlin\ultralcd_implementation_hitachi_HD44780.h"
#include "C:\repo\tinkerine-marlin-firmware\Marlin\ultralcd_st7920_u8glib_rrd.h"
#include "C:\repo\tinkerine-marlin-firmware\Marlin\vector_3.cpp"
#include "C:\repo\tinkerine-marlin-firmware\Marlin\vector_3.h"
#include "C:\repo\tinkerine-marlin-firmware\Marlin\watchdog.cpp"
#include "C:\repo\tinkerine-marlin-firmware\Marlin\watchdog.h"
#endif
