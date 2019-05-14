CC   = gcc
OBJ  = main.o categoria.o utils.o circuito.o escuela.o orm.o partido.o localidad.o mesa.o seccion.o lista_partido.o telegrama_acta.o telegrama_acta_votos.o lista_partido_localidad.o

LIBS =  -L"/usr/lib"
INCS =  -I"/usr/include/postgresql" 

BIN  = tpfinalc

HEADERS = lib/utils/utils.h config/config.h
CFLAGS = $(INCS) $(LIBS)  -lpq -g -Wall

all: $(BIN) clean

$(BIN): $(OBJ)
	$(CC) $(OBJ) -o tpfinalc $(CFLAGS)

main.o: main.c $(HEADERS)
	$(CC) -c main.c $(CFLAGS)

utils.o: lib/utils/utils.c $(HEADERS)
	$(CC) -c lib/utils/utils.c $(CFLAGS)

categoria.o: src/categoria/categoria.c src/categoria/categoria.h $(HEADERS)
	$(CC) -c src/categoria/categoria.c $(CFLAGS) 

circuito.o: src/circuito/circuito.c src/circuito/circuito.h $(HEADERS)
	$(CC) -c src/circuito/circuito.c $(CFLAGS)

escuela.o: src/escuela/escuela.c src/escuela/escuela.h $(HEADERS)
	$(CC) -c src/escuela/escuela.c $(CFLAGS)

partido.o: src/partido/partido.c  src/partido/partido.h $(HEADERS)
	 $(CC) -c src/partido/partido.c $(CFLAGS) 

orm.o: lib/orm/orm.c lib/orm/orm.h $(HEADERS)
	$(CC) -c lib/orm/orm.c $(CFLAGS)

localidad.o: src/localidad/localidad.c src/localidad/localidad.h $(HEADERS)
	$(CC) -c src/localidad/localidad.c $(CFLAGS)

mesa.o: src/mesa/mesa.c src/mesa/mesa.h $(HEADERS)
	$(CC)  -c src/mesa/mesa.c $(CFLAGS)

seccion.o: src/seccion/seccion.c src/seccion/seccion.h $(HEADERS)
	$(CC) -c src/seccion/seccion.c $(CFLAGS)

lista_partido.o: src/lista_partido/lista_partido.c src/lista_partido/lista_partido.h $(HEADERS)
	$(CC) -c src/lista_partido/lista_partido.c $(CFLAGS)

telegrama_acta.o: src/telegrama_acta/telegrama_acta.c src/telegrama_acta/telegrama_acta.h $(HEADERS)
	$(CC) -c src/telegrama_acta/telegrama_acta.c $(CFLAGS)

telegrama_acta_votos.o: src/telegrama_acta_votos/telegrama_acta_votos.c src/telegrama_acta_votos/telegrama_acta_votos.h $(HEADERS)
	$(CC) -c src/telegrama_acta_votos/telegrama_acta_votos.c $(CFLAGS)

lista_partido_localidad.o: src/lista_partido_localidad/lista_partido_localidad.c src/lista_partido_localidad/lista_partido_localidad.h $(HEADERS)
	$(CC) -c src/lista_partido_localidad/lista_partido_localidad.c $(CFLAGS)
	
clean: 
	rm -f *.o 