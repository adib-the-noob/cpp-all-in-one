sample_array = [10, 2, 5, 3, 6, 7, 4, 9]

def sort_array(my_array: list):
    for i in range(len(my_array) - 1):
        for j in range(len(my_array) - i - 1):
            if my_array[j] > my_array[j+1]:
                temp_val = my_array[j] # j = 10
                
                my_array[j] = my_array[j+1]
                print(my_array[j+1], my_array[j])
                my_array[j+1] = temp_val
                
    return my_array

    
data = sort_array(sample_array)
print(data)