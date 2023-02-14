#título          :laboratorio if.py
#descripción     :Ejercicios sobre ifs con el tema de voltaje y corriente.
#autor           :Benjamín Valdés
#python_version  :3.5.2  
#===============================================================

# este programa de ejemplo calcula el volatje y  
# valida que los números para la operación.
# ejercicios para funciones

def valida(num):
    """ valida que el número sea mayor que cero """

    if(num > 0.0):
        return True
    else:
        return False
        

def corriente(voltaje, resistencia):
    """ calcula la corriente electrica según la ley Ohm """
    
    if(valida(resistencia)):
        return voltaje/resistencia
    else:
        return -1

voltaje = float(input())
resistencia = float(input())
print(corriente(voltaje, resistencia))
