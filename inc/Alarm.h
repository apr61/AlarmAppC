
#ifndef ALARM_H
#define ALARM_H

#include "types.h"
#include "Alarm.h"

#define MAX_ALARM_NAME_SIZE 50

typedef struct alarm
{
    u_int8 id;
    char name[MAX_ALARM_NAME_SIZE];
    u_int8 hour;
    u_int8 minutes;
    u_int8 days[7];
} Alarm_S;

void DisplayAllAlarms(const Alarm_S *, char *);
void DisplaySingleAlarm(const Alarm_S *);
void AddAlarm(Alarm_S *, char *);

#endif