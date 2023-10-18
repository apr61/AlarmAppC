#include "../inc/Alarm.h"
#include <stdio.h>

void DisplayAllAlarms(const Alarm_S *Alarm_Ptr, char *CurrentAlarm)
{
    u_int8 Iterator_u8 = 0;
    if (*CurrentAlarm < 0)
    {
        printf("No alarms found...\n");
    }
    else
    {
        for (Iterator_u8 = 0; Iterator_u8 <= *CurrentAlarm; Iterator_u8++)
        {
            DisplaySingleAlarm(&Alarm_Ptr[Iterator_u8]);
        }
    }
}