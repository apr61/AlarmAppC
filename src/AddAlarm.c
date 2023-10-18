#include "../inc/Alarm.h"
#include "../inc/main.h"
#include <stdio.h>

void AddAlarm(Alarm_S * AllAlarms, char *CurrentAlarm)
{
    if (*CurrentAlarm < MAX_ALARMS - 1)
    {
        *CurrentAlarm = *CurrentAlarm + 1;
        printf("Enter ID of alarm\n");
        fflush(stdin);
        scanf("%d", &AllAlarms[*CurrentAlarm].id);
        fflush(stdout);
        printf("Enter name of alarm\n");
        fflush(stdin);
        fgets(AllAlarms[*CurrentAlarm].name, sizeof(AllAlarms[*CurrentAlarm].name), stdin);
        fflush(stdout);
        printf("Enter hour of alarm\n");
        fflush(stdin);
        scanf("%d", &AllAlarms[*CurrentAlarm].hour);
        fflush(stdout);
        printf("Enter minutes of alarm\n");
        fflush(stdin);
        scanf("%d", &AllAlarms[*CurrentAlarm].minutes);
        fflush(stdout);
    } else {
        printf("Alarms limit reached %d.\nPlease remove old alarms to add new ones...", MAX_ALARMS);
    }
}