OBJ = main.o classify.o  getscore.o eval.o output.o 
APPNAME = score.a

#link rule
$(APPNAME) : $(OBJ)
	gcc -o $(APPNAME) $(OBJ)

#coiling rule
%.o : %.c
	gcc -c -o $@ $<

clean :
	rm $(OBJ) $(APPNAME)
tar:
	tar of project.rar
