number = int(input())
w = len((bin(number))[2:])
def con_oct(num):
    con = oct(num)
    return (con[2:])
def con_hexD(num):
    con = (hex(num)).upper()
    return (con[2:])
def con_bin(num):
    con = (bin(num)).upper()
    return (con[2:])
def main(in_num):
    for i in range(1, (in_num + 1)):
        print(str(i).rjust(w), con_oct(i).rjust(w), con_hexD(i).rjust(w), con_bin(i).rjust(w))
main(number)
