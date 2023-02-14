#título          :laboratorio archivos.py
#descripción     :Ejercicios sobre archivos.
#autor           :Benjamín Valdés
#python_version  :3.5.2  
#===============================================================

# Funciones para ordenar por orden de ganancia
# y alfabeticamente el contenido de los archivos 
# en tablas de e-sports



def get_nombre(linea):

    """extrae el nombre de un judar de la línea"""

    palabras = linea.split('\t')
    nick = palabras[0]
    nombre = palabras[1]
    
    return nombre

def get_sueldo(linea):

    """extrae el sueldo y lo regresa como float"""

    index = linea.find("$")
    numero = linea[index+1:]
    valor = numero.replace(',','')

    return float(valor)
    

def escribe_tabla(origen, destino):
    """escribe el nombre y el sueldo de un jugador 
    en otro archivo"""

    f = open(origen)
    lineas = f.readlines()
    f.close()

    f = open(destino, "w")
    
    for linea in lineas:
        f.write("nombre %s sueldo %s \n" %(get_nombre(linea),get_sueldo(linea)))
    
    f.close()

origen = input()
destino = input()
escribe_tabla(origen,destino)