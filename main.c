#include "./inc/Alarm.h"
#include "./inc/main.h"
#include "./inc/types.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    u_int8 Choice_u8;
    Alarm_S Alarms[MAX_ALARMS];
    char CurrentAlarm_u8 = -1;
    while (1)
    {
        printf("Alarm app...\n");
        printf("1. See all alarms\n");
        printf("2. Add an alarm\n");
        printf("3. Edit an alarm\n");
        printf("4. Delete an alarm\n");
        printf("Press any other key to exit...\n");
        printf("\t-----Enter your choice----\n");
        fflush(stdin);
        scanf("%d", &Choice_u8);
        fflush(stdout);
        switch (Choice_u8)
        {
        case NEW_ALARM:
            printf("Add an alaram...\n");
            AddAlarm(Alarms, &CurrentAlarm_u8);
            printf("Alarm added successfully...\n");
            break;
        case ALL_ALARMS:
            printf("All alarms...\n");
            DisplayAllAlarms(Alarms, &CurrentAlarm_u8);
            break;
        default:
            printf("Exiting app...\n");
            exit(0);
        }
    }
}