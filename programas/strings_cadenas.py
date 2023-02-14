#título          :laboratorio string.py
#descripción     :Ejercicios sobre cadenas.
#autor           :Benjamín Valdés
#python_version  :3.5.2  
#===============================================================

# este programa de ejemplo contiene ejercicios de 
# cadenas

def limpia_cadena(caracteres_seguros, cadena) :

    """genera una nueva cadena con caracteres en el 
    conjunto caracteres_seguros, los demás son descartados"""
    
    nueva_cadena = []
    for letra in cadena:
        for caracter in caracteres_seguros:
            if letra == caracter:
                nueva_cadena.append(letra)
                
    return ''.join(nueva_cadena)
 
caracteres_seguros = " abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZñÑáéíóú0123456789"

cad = str(input())
print(limpia_cadena(caracteres_seguros, cad))