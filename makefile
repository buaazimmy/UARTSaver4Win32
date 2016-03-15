all: comwrite

obj = *.cpp

comwrite: main.cpp
	g++ -I../include $(obj) -o comwrite

clean:
	 del  $(obj)/*o comwrite