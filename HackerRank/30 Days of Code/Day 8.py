if __name__ == '__main__':
    case = int(input())
    dis = {}

    for x in range(case):
        str1 = input()
        x, y = str1.split()
        dis[x] = y

    while True:
        try:
            n = input()
            if n in dis:
                print(n + "=" + dis[n])
            else:
                print("Not Found")
        except:
            break
