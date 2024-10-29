size, num_of_consl = map(int, input().split())
arr = [int(x) for x in input().split()]
if size != len(arr):
    exit()
for i in range(num_of_consl):
    type, x, y = input().split()
    x, y = map(int, (x, y))
    # caso C: imprimir min y max en rango(x-1, y) 
    if type == 'C':
        new_arr = arr[x-1:y]
        print(min(new_arr), max(new_arr))
    # caso A: asignar valor Y a arr[X-1]. 
    if type == 'A':
        arr[x-1] = y