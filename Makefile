LDFLAGS:= -lboost_system -lboost_thread
CC := c++

helloworld:	helloworld.cpp
	$(CC) $(LDFLAGS) helloworld.cpp -o helloworld 

clean:
	rm helloworld
