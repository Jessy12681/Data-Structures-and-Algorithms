def rotate (array,n):
    k %= len(array)

    array.reverse()
    array[:k] = reversed(array[:k])
    array[k:] = reversed(array[k:])
    array =[4, 5, 7, 2, 8, 6, 9]
    rotate (array, 3)
    print (array)