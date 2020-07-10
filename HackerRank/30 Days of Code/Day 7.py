

if __name__ == '__main__':
    n = input()
    strr = input()
    strr = list(map(int,strr.rstrip().split(" ")))
    print(*strr[::-1])
