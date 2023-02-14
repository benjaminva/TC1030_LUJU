#título          :funciones.py
#descripción     :calcula el costo de un viaje a Gen Con.
#autor           :Benjamín Valdés
#python_version  :3.5.2  
#===============================================================

# este programa de ejemplo calcula el costo de un 
# viaje a una convención de comics.
# ejercicios para funciones

def dolares_a_pesos(dolares):
    """ convierte dolares a pesos"""
    
    return dolares * 21.5
    
def costo_hotel(noches):
    """ devuelve el costo total en dolares """
    
    return noches * 170.0
    
def costo_avion(pasajeros):
    """  devuelve el costo total de los aviones en dolares"""
    
    return pasajeros * 315
    
def costo_viaje(noches, pasajeros):
    """ devuelve el costo aproximado en pesos del hotel y el avion """
    
    hotel = dolares_a_pesos(costo_hotel(noches))
    avion = dolares_a_pesos(costo_avion(pasajeros))
    
    return hotel + avion 
   

# pide opción y dependiendo de la opción llama una función diferente

noches  = int(input())
pasajeros  = int(input())
print(costo_viaje(noches,pasajeros))
