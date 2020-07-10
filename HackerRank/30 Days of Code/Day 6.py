num = int(input())

for x in range(0, num):
    string = input()
    print(string[0::2], end="  ")
    print(string[1::2])
