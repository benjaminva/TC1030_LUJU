#título          :lista.py
#descripción     :Ejercicios sobre listas.
#autor           :Benjamín Valdés
#python_version  :3.5.2
#===============================================================

# ejemplos de listas en python

 
def llena_lista(lista, tam):
    i = 0
    while(i < tam):
        lista.append(int(input()))
        i = i + 1
   
    
tam = int(input())
lista = []
llena_lista(lista, tam)
print (lista)
