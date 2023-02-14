#título          :while.py
#descripción     :Ejercicios sobre ciclos.
#autor           :Benjamín Valdés
#python_version  :3.5.2
#===============================================================

# ejemplos para ciclos en python


def potencia(x,n):

    """ culcula la potencia de un número usando ciclos"""

    i = 0
    pot = 1.0
    if(n > 0):
        while(i < n):
            pot = pot * x
            i = i + 1
    else:
        while(0 > n):
            pot = pot * 1.0/x
            n = n + 1    
    return pot



x = int(input())
n = float(input()) 
print("%.4f" % potencia(x,n))
    