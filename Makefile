DEFINES+=MOTION_SENSOR_H_=\"motion-sensor.h\"
DEFINES+=PROJECT_CONF_H=\"project-conf.h\"

CONTIKI_PROJECT = test-motion

all: $(CONTIKI_PROJECT)

CONTIKI = ../..
CONTIKI_WITH_RIME = 1
include $(CONTIKI)/Makefile.include