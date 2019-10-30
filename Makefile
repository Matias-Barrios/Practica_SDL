#Makefile for SDL universe


SOURCES := $(shell find . -name \*.cpp)
buildRun:
	echo "Building.."
	g++  -std=c++11 $(SOURCES) -L/usr/include -lSDL2 -o blocks
	echo "Done"

