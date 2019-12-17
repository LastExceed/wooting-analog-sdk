/* This is a generated header file providing the necessary items for Analog SDK plugins */

/* Warning, this file is autogenerated by cbindgen. Don't modify this manually. */

#include <cstdarg>
#include <cstdint>
#include <cstdlib>
#include <new>
#include "wooting-analog-common.h"

extern "C" {

extern const uint32_t ANALOG_SDK_PLUGIN_ABI_VERSION;

extern const WootingAnalog_str* ANALOG_SDK_PLUGIN_VERSION;

WootingAnalog_DeviceID generate_device_id(const char* serial_number,
                                          uint16_t vendor_id,
                                          uint16_t product_id);

} // extern "C"
