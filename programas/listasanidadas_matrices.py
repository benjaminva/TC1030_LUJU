#título          :listas anidadas.py
#descripción     :Ejemplos listas anidadas y matrices.
#autor           :Benjamín Valdés
#python_version  :3.5.2  
#===============================================================

# este programa de ejemplo contiene ejercicios de 
# listas anidadas y matrices

def crea_lista_anidada(exterior, interior):

    """ crea una lista anidada de 2 niveles """
    
    lista_exterior = []
    
    i = 0
    while(i < exterior):
        lista_interior = []
        
        j = 0
        while(j < interior):
            lista_interior.append(int(input()))
            j = j + 1
        
        lista_exterior.append(lista_interior)
        i = i + 1
       
    return lista_exterior

    
def suma_diagonal(matriz):
 
    """suma la diagonal de una matriz"""
 
    if len(matriz) != len(matriz[0]):
        return False 
        
    sum = 0
    i = 0
    for line in matriz:
        
        j = 0
        for number in line:
            if i == j:
                sum = sum + number
            j = j + 1
        
        i = i + 1
    return sum
    

ren = int(input())
col = int(input())
mat = crea_lista_anidada(ren,col)
print(mat)
print(suma_diagonal(mat))
