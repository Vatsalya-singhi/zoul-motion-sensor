DEFINES+=MOTION_SENSOR_H_=\"motion-sensor.h\"
DEFINES+=PROJECT_CONF_H=\"project-conf.h\"

CONTIKI_PROJECT = test-motion

CONTIKI_TARGET_SOURCEFILES += motion-sensor.c # line 87/135 

all: $(CONTIKI_PROJECT)

CONTIKI = ../..
CONTIKI_WITH_RIME = 1
include $(CONTIKI)/Makefile.include

# https://github.com/contiki-os/contiki/tree/master/examples
# https://docs.contiki-ng.org/en/develop/_api/group__zoul-motion-sensor.html
# https://github.com/contiki-os/contiki