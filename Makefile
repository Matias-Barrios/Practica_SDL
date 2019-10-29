#Makefile for SDL universe


SOURCES := $(shell find . -name \*.cpp)
buildRun:
	echo "Building.."
	g++  -lSDL2 $(SOURCES) -o blocks
	echo "Done"

