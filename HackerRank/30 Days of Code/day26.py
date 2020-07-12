# GEEKFORGEEK

# Example:
# Input:
# 2
# i.like.this.program.very.much
# pqr.mno

# Output:
# much.very.program.this.like.i
# mno.pqr


# from collections import deque

for _ in range(int(input())):

    var1 = input().split(".")

    var1.reverse()

    var1 = ".".join(var1)
    print(var1)
