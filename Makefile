#Description: TMA Makefile
#Date: May 20, 2015
#Author: Carlos Nikiforuk
#Version: 1.0
#Copyright: 2015 Carlos Nikiforuk


#Compile: make -f TMA1Question1Makefile

#Options:
#   make <prog> - make program
#   make all (or make) - make all programs
#   make debug - debug mode
#   make clean - clean object and executable bins
#   make zip - zip of folder ready to submit

BINS = TMA1Question1 TMA1Question2 TMA1Question3 TMA1Question4 TMA1Question5
CC = g++
SRC=$(BIN).cpp
OBJ=$(SRC:.cpp=.o)
CFLAGS = -c
LDFLAGS = 

ZIPFLAGS = zip 
ZIP = comp306-cnikiforuk-$(notdir $(shell pwd)).zip

.PHONY: all

all:	$(foreach BIN, BINS, $($(BIN)))

TMA1Question*:	$(OBJ)
				$(CC) $(LDFLAGS) $(OBJ) -o $@

.PHONY: debug
debug: LDFLAGS += -DDEBUG -g
debug: all

.PHONY: clean
clean:
	rm -f $(OBJ) $(ZIP) $(BINS) 

.PHONY: zip
zip: clean
	$(ZIPFLAGS) $(ZIP) *
	
