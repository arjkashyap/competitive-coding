T = int(input())

def sizer(input_number):
    output = str(input_number) + '0' * 11   
    output = output[0:12]  
    print(output)

def sol(testcases):
    i = 0
    tc = testcases
    losses = []
    while i < testcases:
        lost = 0
        j = 0
        rc = int(input())
        while j < rc:
            main_list = str(input()).split()
            op = int(main_list[0])
            q = int(main_list[1])
            d = int(main_list[2])
            np = op + (op*(d/100))
            nd = np*(d/100)
            cut = np - nd
            loss = q*(op - cut)
            lost += loss
            j += 1

        losses.append(lost)
    
        i +=1
    for k in range(len(losses)):
        sizer(float(losses[k]))

sol(T)
