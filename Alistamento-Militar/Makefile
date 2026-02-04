TARGET = alistamento
CC = gcc

# Agora sem barras e sem aspas, pois não há espaços
CFLAGS = -Wall -I. \
         -IAlistamento_Militar_Masculino \
         -IAlistamento_Militar_Masculino/Naturalidade \
         -IAlistamento_Militar_Masculino/Escolaridade \
         -IAlistamento_Militar_Masculino/Perfil_Social

SRCS = main.c \
       Alistamento_Militar_Masculino/alist_mili_masc.c \
       Alistamento_Militar_Masculino/Naturalidade/naturalidade.c \
       Alistamento_Militar_Masculino/Escolaridade/escolaridade.c \
       Alistamento_Militar_Masculino/Perfil_Social/perfil_social.c

OBJS = $(SRCS:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)

run: all
	./$(TARGET)
