#include "../inc/Alarm.h"
#include <stdio.h>

void DisplaySingleAlarm(const Alarm_S * Alarms_Ptr)
{
    printf("ID : %d\n", Alarms_Ptr -> id);
    printf("Name : %s\n", Alarms_Ptr -> name);
    printf("Hour : %d\n", Alarms_Ptr -> hour);
    printf("Minutes : %d\n", Alarms_Ptr -> minutes);
}