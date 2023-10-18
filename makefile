
RM:= del
TARGET:= cm

${TARGET} : main.o DisplaySingleAlarm.o DisplayAllAlarms.o AddAlarm.o
	gcc main.o DisplaySingleAlarm.o DisplayAllAlarms.o AddAlarm.o -o ${TARGET}

main.o : main.c
	gcc -c main.c

DisplaySingleAlarm.o : ./src/DisplaySingleAlarm.c
	gcc -c ./src/DisplaySingleAlarm.c

DisplayAllAlarms.o : ./src/DisplayAllAlarms.c
	gcc -c ./src/DisplayAllAlarms.c

AddAlarm.o : ./src/AddAlarm.c
	gcc -c ./src/AddAlarm.c

clean : 
	@echo "Clean started..."
	$(RM) *.exe
	$(RM) *.o *.d
	@echo "Clean completed..."
