# Generic Makefile
# Author: linzhi
# Date	: 2013-06-18

COLOR = \033[34;01m
NOCOLOR = \033[0m

CXX = g++
CXXFLAGS = -g -I./include -I./include/algorithm -I.

SRCDIR = ./src
OBJDIR = ./obj
BINDIR = ./bin

TARGET = stack\
		 queue\
		 binary_search\
	  	 hash_search\
	  	 bubble_sort\
	  	 heap_sort\
	  	 merge_sort\
	  	 insert_sort\
	  	 quick_sort\
	  	 select_sort\
	  	 shell_sort\
	  	 radix_sort\
	  	 prim\
	  	 DFS\

all: $(TARGET)

%: $(SRCDIR)/%.cpp
	@echo "$(COLOR)>Building target:$@$(NOCOLOR)"
	$(CXX) $(CXXFLAGS) -o $(BINDIR)/$@ $<
	@echo "$(COLOR)>Finished building target:$@$(NOCOLOR)"


.PHONY: all clean

clean:
	rm -rf $(BINDIR)/$(TARGET)
	@echo "$(COLOR)clean done.$(NOCOLOR)"
