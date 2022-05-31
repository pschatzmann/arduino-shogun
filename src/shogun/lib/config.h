#ifndef __SHOGUN_LIB_CONFIG_H__
#define __SHOGUN_LIB_CONFIG_H__

#define MACHINE "arduino"

#ifdef ESP32
#define ARDUINO_STRING_VIEW
#endif

#define HAVE_STD_VARIANT 1

#ifdef ARDUINO
#define SOURCE_LOCATION __PRETTY_FUNCTION__
#define dynamic_cast static_cast
#define SWIG
#define ASSERT assert
#endif

#endif /* __SHOGUN_LIB_CONFIG_H__ */
