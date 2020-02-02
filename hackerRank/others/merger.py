string = "AABBCCD"
result_list = []



def refine(str_input):
    s = str_input
    s_list = list(s)
    unordered = list(set(s_list))
    for i in range(len(unordered)):
        result_list.append("c")
    for i in range(len(unordered)):
        orignal_pos = s_list.index(unordered[i])
        result_list[orignal_pos] = str(unordered[i])
    print("".join(result_list))
        
        


    
refine(string)
