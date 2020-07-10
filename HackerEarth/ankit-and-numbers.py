if __name__ == '__main__':
    for _ in range(int(input())):
        num = int(input())
        occurr = 2 ** (num - 1)
        sum1 = num * (num + 1) // 2
        print(sum1*occurr)