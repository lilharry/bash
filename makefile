compile: executor.c
	gcc executor.c -o executor

run: executor
	./executor
