def fibonacci(array, number):
    if number not in array:
        array[number] = fibonacci(array, number - 1) + fibonacci(array, number - 2)
    return array[number]

def initializeArray(number):
    array = {1: 1, 2: 1}
    return fibonacci(array, number)

n = 20
result = initializeArray(n) 
print(f'Result para n = {n} -> {result}')
