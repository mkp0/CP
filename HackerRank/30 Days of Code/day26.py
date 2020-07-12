d1 = list(map(int, input().split()))
d2 = list(map(int, input().split()))

fine = 0
if d1[2] > d2[2]:
    fine = 10000
elif d1[2] == d2[2]:
    if d1[1] > d2[1]:
        fine = 500 * (d1[1] - d2[1])
    elif d1[1] == d2[1]:
        if d1[0] > d2[0]:
            fine = 15 * (d1[0] - d2[0])

print(fine)
