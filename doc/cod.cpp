import time
 
start_time = time.time()  # execution start time

def linear_Search(list1, n, key): 
 
    for i in range(0, n): 
        if (list1[i] == key): 
            return i 
    return -1 
 
 
list1 = [1 ,3, 5, 7, 9, 3, 5, 6, 8, 5, 3, 1, 2, 6, 5, 7, 8, 9, 1 ,3, 5, 7, 9, 3, 5, 6, 8, 5, 3, 1, 2, 6, 5, 7, 8,1 ,3, 5, 
7, 9, 3, 5, 6, 8, 5, 3, 1, 2, 6, 5, 7, 8, 9, 1 ,3, 5, 7, 9, 3, 5, 6, 1, 5, 3, 1, 2, 6, 5, 7, 8, 1 ,3, 5, 7, 9, 3, 5, 6, 8,
5, 3, 1, 2, 6, 5, 7, 8, 9, 1 ,3, 5, 7, 2, 3, 5, 6, 8, 5, 3, 1, 2, 6, 5, 7, 8,1 ,3, 5, 5, 7, 8,
7, 9, 3, 5, 6, 8, 5, 3, 1, 2, 6, 5, 7, 8, 9, 1 ,3, 5, 7, 9, 3, 5, 6, 8, 5, 3, 1, 2, 6, 5, 7, 4,] 
key = 4 
 
n = len(list1) 
res = linear_Search(list1, n, key) 
if(res == -1): 
    print("Item not found")
else: 
    print("Item found under index: ", res)

end_time = time.time()  # end time
execution_time = end_time - start_time 
print(f"Program execution time: {execution_time} second")